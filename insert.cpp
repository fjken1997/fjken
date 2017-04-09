#include<iostream>
using namespace std;
int a[101],b[101],c[101];
int main()
{
	int i,j,n,m,temp=101;
	cin>>n;
	for(i=0;i<=n-1;++i)
	{
		cin>>a[i];
	}
   	for(i=0;i<=n-1;++i)
	{
		cin>>b[i];
	}
	for(i=0;i<=n-1;++i)
	{
		for(j=0;j<=n-1;++j)
		{
			if(a[i]==b[j])    c[i]=j;
		}	
	}
	for(i=0;i<=n-2;++i)
	{
		if(c[i]>c[i+1])    
		{
			temp=i;
			break;
		}
	}	
	if (temp==101)    temp=n-1;
	cout<<n-temp-1;
return 0;
}
