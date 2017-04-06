//统计单词数
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	int t=0,tt=0;
	char s[1000001],c[11];
	cin.getline(c,11);
	cin.getline(s,1000001);
	for(int i=0;i<=strlen(s)-strlen(c);++i)
	{
		int j;
		for(j=0;j<=strlen(c)-1;++j)
		{
			if(toupper(s[j+i])!=toupper(c[j]))   break;
			if(i>0&&s[i-1]!=' ') break;
		}
		if(j==strlen(c)&&(s[j]==' '||j+i==strlen(s)))
		{
			t++;
			if(t==1) tt=i;
		}
	}
	if(t==0)  printf("-1");
	else printf("%d %d",t,tt);
return 0;
} 
