#include<iostream>
using namespace std;
int a[1001];
int main()
{
	int n,i,j,count=0;
	cin>>n;
	for(i=0;i<=n-1;i++)
		cin>>a[i];
	for(i=0;i<=n-1;i++)
		for(j=i+1;j<=n-1;j++)
			if(a[i]>a[j])    count++;
	cout<<count<<endl;
return 0;
}
