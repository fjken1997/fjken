#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,i,j;
	char a[100001],b[100001];
	memset(b,'\0',sizeof(b));
	cin>>n;
	for(i=0;i<=n-1;++i)    cin>>a[i];
	if(n%2!=0)
	{
		cout<<"NO";
		return 0;
	}
	else 
	{
		b[0]=a[0];
		i=1,j=0;
		while(i<=n-1)
		{
			if(a[i]==b[j]){
				b[j]='\0';
				j--;
			}
			else{
				j++;
				b[j]=a[i];
			}
			i++;
		}
	}
	if(b[0]=='\0')    cout<<"YES";
	else    cout<<"NO";
return 0;
}
