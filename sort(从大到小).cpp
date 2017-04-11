#include<algorithm>
#include<iostream>
using namespace std;
int a[10];
int my_comp(const int&a,const int&b)
{
	return a>b;
}
int main()
{
	for(int i=0;i<=9;++i)
	{
		cin>>a[i];
	}
	sort(a+0,a+10,my_comp); 
	for(int i=0;i<10;++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
return 0;
}
