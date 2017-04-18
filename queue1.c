#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define node struct node

node
{
    int num ;
    node *right;
};

node * init(int n)
{
    int i ;
    node *head , *p ;
    head = (node *) malloc (sizeof(node));
    head -> num = 1 ;
    head -> right = NULL;
    p = head ;
	for ( i = 2 ; i <= n ; i++)
    {
        p->right = (node *) malloc (sizeof(node));
        p = p->right ;
        p-> num = i;
        p->right = NULL;
    }
    return head ;
}

node * output(int m , node * head)
{
    node * p ;
    p = head ;
    if ( m == 1 )
    {
        printf("%d ",head->num);
        head = head -> right;
        return head;
    }
    int i ;
    for ( i = 2 ; i < m ; i++)
        p = p->right;
    printf("%d ",p->right->num );
    p->right = p->right->right;
    return head ;
}

int main()
{
    int n , m ;
    node * head;
    scanf("%d",&n);
    head = init(n);
    while(n--)
    {
        scanf("%d",&m);
        head = output(m,head);
    }
    return 0;
}
