#include<stdio.h>
#include<ctime.h>
int a[100001][3]={0};
int main()
{
	int n,i,j,k,l,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		if(a[k][0]==0)
		{
			a[k][0]=1;
			a[k][1]=i;
			sum++;
		}
		else if(a[k][0]==1)
		{
			if(a[k][2]==0)
			{
				a[k][2]=i-a[k][1];
				a[k][1]=i;
			}
			else
			{
				if(a[k][2]!=i-a[k][1])
				{
					sum--;
				    a[k][0]=-1;
				}
				else a[k][1]=i; 
			}
			
		}		
	}
	if(sum>0) 
	{
		printf("%d\n",sum); 
		for(j=1;j<=100000;j++)
		{
			if(a[j][0]==1)    printf("%d %d\n",j,a[j][2]);
		}
	}
	else    printf("0");
return 0;	
}
