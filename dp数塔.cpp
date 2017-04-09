#include<iostream>
#include<cstdio>
#define max(a,b) a>b?a:b
using namespace std;
int a[101][101]={0};
int main()
{
	int m,n;
	while(1)
	{
		cin>>n;
		for(int i=0;i<=n-1;++i)
			for(int j=0;j<=i;++j)
				cin>>a[i][j];
		for(int i=n-2;i>=0;--i)
			for(int j=0;j<=i;++j)
				a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
		cout<<a[0][0];
	}
return 0;
}
