#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s[10];
int main()
{
	int l,r,ans=0;
	cin>>l>>r;
	for(int i=l;i<=r;++i)
	{
		sprintf(s,"%d",i);
		int len=strlen(s);
		for(int j=0;j<len;++j)
		{
			if(s[j]=='2')    ans++;
		}
	}
	cout<<ans<<endl;
return 0;
}
