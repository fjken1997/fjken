#include<iostream>
using namespace std;
int gcd(int x,int y);
int main()
{
	int m,n;
	cin>>m>>n;
	int g=gcd(m,n);
	cout<<g<<endl;
return 0;
}

int gcd(int x,int y)
{
	int temp;
	while(y!=0)
	{
		temp=x%y;
		x=y;
		y=temp;
	}
return x;
}
