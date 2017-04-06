//reverse ·´×ªÊý×Ö
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[100],b[100];
int main()
{
	int n;
	cin>>n;
	sprintf(a,"%d",n);
	int len=strlen(a);
	for(int i=0;i<len;++i)
	{
		b[len-i-1]=a[i];
	}
	if(n<0) cout<<'-';
	sscanf(b,"%d",&n);
	cout<<n;
	return 0;
} 
