#include<iostream>
#include<string>
using namespace std;
int main()
{
	int tot=0;
	string s;
	while(cin>>s) // while(cin>>s) �����ȡ���ַ��������ʶ��룩 ��
	//while(getline(cin,s)) // �� while(getline(cin,s)) ���ȡ�������ӣ��������ַ�(�򵥶��Ļ��з�) �������Ӷ��룩 
	{
		cout<<++tot<<" "<<s<<endl;
	}
	return 0;
}
