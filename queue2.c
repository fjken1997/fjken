#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define node struct node

node
{
    int num ;
    node *right , *left;
}*tail;

node * init(int n)
{
    int i ;
    node *head , *p ;
    head = (node *) malloc (sizeof(node));
    head -> num = 1 ;
    head -> right = NULL;
    head -> left = NULL;
    p = head ;
    tail = p ;
    for ( i = 2 ; i <= n ; i++)
    {
        p->right = (node *) malloc (sizeof(node));
        p->right->left = p ;
        p = p->right ;
        p-> num = i;
        p->right = NULL;
        tail = p ;
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
        if ( head ->right != NULL )
            head->right->left = NULL;
        head = head -> right;
        return head;
    }
    int i ;
    for ( i = 2 ; i < m ; i++)
        p = p->right;
    printf("%d ",p->right->num );
    if ( p->right->right == NULL)
    {
        tail = p ;
    }
    else
    {
        p->right->right->left = p ;
    }
    p->right = p->right->right;
    return head ;
}

node * output2(int m ,node * head)
{
    node * p ;
    p = tail ;
    if ( m == 1 )
    {
        printf("%d ",tail->num);
        if ( tail ->left != NULL )
            tail->left->right = NULL;
        tail = tail -> left;
        return head ;
    }
    int i ;
    for ( i = 2 ; i < m ; i++)
        p = p->left;
    printf("%d ",p->left->num );
    if ( p->left->left == NULL)
    {
        head = p ;
    }
    else
    {
        p->left->left->right = p ;
    }
    p->left = p->left->left;
    return head ;
}
int main()
{
    int n , m ;
    node * head;
    char con;
    scanf("%d",&n);
    head = init(n);
    while(n--)
    {
        scanf(" %c %d",&con,&m);
        if ( con == 'L' )
            head = output(m,head);
        else
            head = output2(m,head);
    }
    return 0;
}