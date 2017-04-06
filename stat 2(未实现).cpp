#include<algorithm>
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
string word,str;
int main()
{
	int first=0,ans=0;
	cin>>word;
	word=" "+word+" ";
	for(string::size_type i=0;i!=word.size();++i)
	{
		word[i]=toupper(word[i]);
	}
	getline(cin,str);
	getline(cin,str);
	str=" "+str+" ";
	for(string::size_type i=0;i!=str.size();++i)
	{
		str[i]=toupper(str[i]);
	}
	for(string::size_type i=str.find(word);i<str.size();i=str.find(word,i+word.size()-1),++ans)
	{
		if(!ans) first=i;
	}
	if(ans) cout<<ans<<' '<<first<<endl;
	else cout<<-1<<endl;
return 0;
}
