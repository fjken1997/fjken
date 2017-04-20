#include<iostream>
using namespace std;
int main()
{
	int n,i,j,t=0;
	int a[100001];
	cin>>n;
	for(i=0;i<=n-1;++i)
	{
		cin>>a[i];
	}
	i=0;
	while(i<=n-1)
	{
		j=i+1;
		if(a[i]>a[j])
		{
			while(a[i]>a[j++] && j<=n-1)
			{
				if(a[j-1]<a[j])	
				{
			    	cout<<"NO";
			    	return 0;			        
				}
			}
		i=j;
		}
		else
			i++;	
	}	
	cout<<"YES";
return 0;
}
