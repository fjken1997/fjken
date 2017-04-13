#include<iostream>
#include<string>
using namespace std;
int main()
{
	int tot=0;
	string s;
	while(cin>>s) // while(cin>>s) 不会读取空字符（按单词读入） ；
	//while(getline(cin,s)) // 而 while(getline(cin,s)) 会读取整个句子，包括空字符(或单独的换行符) （按句子读入） 
	{
		cout<<++tot<<" "<<s<<endl;
	}
	return 0;
}
