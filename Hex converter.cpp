// Hex converter
#include<iostream>
#include<cstdlib>
using namespace std;
int date(int x,int y);
char ch[6]={'a','b','c','d','e','f'};
int date(int x,int y);
int main()
{
	int n;
	cin>>n;
	date(n,2);
	date(n,8);
	date(n,16);
return 0;
}

int date(int x,int y)
{
	int num[17],i,j,k=0;
	cout<<x<<" turn into "<<y<<" : "8;
	if(x<0)    cout<<'-';
	j=abs(x);
	do{
	    k++;
	    i=j%y;
	    j/=y;
	    num[k]=i;
	}while(j!=0);
	for(int h=k;h>=1;--h)
	{
		if(num[h]<10)    cout<<num[h];
		    else    cout<<ch[num[h]-10];	
	}
	cout<<endl;
}
 

