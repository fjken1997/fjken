#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a,b; 
	string s1="12345",s2="6789";
	sscanf(s1.c_str(),"%d",&a);
	sscanf(s2.c_str(),"%d",&b);
	cout<<a+b<<endl;
return 0;
}
