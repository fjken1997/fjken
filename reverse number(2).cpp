#include<iostream>
#include<cstdio>
using namespace std;
string s;
void Solve(int x)
{
	while(x>0)
	{
		s+=x%10+48;
		x/=10;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n<0) 
	{
		cout<<'-';
		n=-n;
	}
	Solve(n);
	int j=0,len=s.size();
	while((j+1!=len)&&(s[j]=='0')) 
		++j;
	for(;j<len;++j) cout<<s[j];
return 0;
}

