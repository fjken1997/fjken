#include<cstdio>
using namespace std;
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int temp,sum=0;
	while(scanf("%d",&temp)==1)    //while(cin>>temp)
	{
		sum=sum+temp;
	}
	printf("%d\n",sum);    //cout<<sum<<endl;
	fclose(stdin);
	fclose(stdout);
return 0;
}
