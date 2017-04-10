#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
#define fin cin
#define fout cout
using namespace std;
struct student{
	string name;
	int score;
}a[100];
int num;
int comp(const student &a,const student &b)
{
	if(a.score>b.score)    return 1;
	if(a.score<b.score)    return 0;
	if(a.name<b.name)    return 1;
	return 0;
}
int main()
{
	ifstream fin("score in.txt");
	ofstream fout("score out.txt");
	cin>>num;
	for(int i=0;i<=num-1;++i)
	{
		cin>>a[i].name;
		cin>>a[i].score;
	}
	sort(a+0,a+num,comp);
	for(int i=0;i<=num-1;++i)
	{
		cout<<a[i].name<<" "<<a[i].score<<endl;
	}
return 0;
}
