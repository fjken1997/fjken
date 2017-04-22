#include<stdio.h>
int main()
{
	int i,n,m,num=0,sum=0,j,k;
	int a[101000];
	int mid,max=0,min=0,low,high;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		high+=a[i];
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	low=max;
	while(low<=high)
	{
		num=0;
		mid=(low+high)/2;
		for(sum=0,i=1;i<=n;i++)
		{
			sum+=a[i];
			if(sum>mid)
			{
				num++;
				sum=a[i];
			}
		}
		num++;
		if(num<=m)
		{
			min=mid;
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}	
	printf("%d",min);
	return 0;
}
