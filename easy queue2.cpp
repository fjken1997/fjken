#include<stdio.h>  
int p[100001]={0};
int main()  
{  
    int a,b,n,i,top=0,k=0,count=0;  
    scanf("%d",&n);   
    for(i=0;i<=n-1;++i)  
    {  
        scanf("%d",&a);  
        switch(a)  
        {  
            case 1: scanf("%d",&b);p[k++]=b;count++;break;  
            case 2: printf("%d\n",p[top]*131);++top;if(count>0)count--;break;  
            case 3: printf("%d\n",p[top]*121);++top;if(count>0)count--;break;  
            case 4: printf("%d\n",count);break;  
        }    
    }  
    return 0; 
}
