//按照字母顺序输出国家名字
 #include<iostream>
 #include<cstdio>
 #include<cstring>
 using namespace std;
 const int n=5;
 int main()
 {
 	char t[21],cname[n][21];
 	for(int i=1;i<=n;++i)   gets(cname[i]);
 	for(int i=1;i<=n-1;++i)
 	{
 		int k=i;
 		for(int j=i+1;j<=n;++j)
 		{
 			if(strcmp(cname[k],cname[j])>0) k=j;
		}
 		strcpy(t,cname[i]);
 		strcpy(cname[i],cname[k]);
 		strcpy(cname[k],t);
	}
	for(int i=1;i<=n;++i)   cout<<cname[i]<<endl;
return 0;
 } 
