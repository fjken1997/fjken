#include<iostream>  
#include<vector>  
#include<cstring>  
using namespace std;  
  
int main()  
{  
    int i,j,k,n,m,s,t;  
    char c;  
    vector<int> a;  
    cin>>n;  
    for (i=0;i<n;i++) a.push_back(i+1);  
    for (i=0;i<n;i++)  
    {  
        cin>>c>>j;  
        switch (c)  
        {  
            case 'L':  
            {  
                cout<<a[j-1]<<' ';  
                a.erase(a.begin()+j-1);  
                break;  
            }  
            case 'R':  
            {  
                cout<<a[a.size()-j]<<' ';  
                a.erase(a.end()-j);  
            }  
        }  
    }  
    return 0;  
}  
