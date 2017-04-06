//找出[L,R]区间内2出现的次数 
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int l,r,x,ans=0;
	cin>>l>>r;
	for(int i=l;i<=r;++i)
	{
		x=i;
		while(x>0)
		{
			if(x%10==2) ans++;
			x/=10;
		}
	}
	cout<<ans<<endl;
return 0;
}
