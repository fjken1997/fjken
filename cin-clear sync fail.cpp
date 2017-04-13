//cin.clear()    cin.sync()    cin.fail()相关用法概述

#include <iostream> 
using namespace std; 
int main()  
{        
    int number;         
    while(1)         
    {                 
        cin>>number;                 
        if(!cin)            //条件可改写为cin.fail()，即 if(cin.fail())                 
        {                         
            cout<<"输入有错!请重新输入"<<endl;                         
            cin.clear();   /*上面的cin.clear()默认参数为0,即无错误,正常操作.
							当我们输入英文字母'k'时,它的状态标识改为fail,即错误,
							用cout对用户输出信息,再用cin.clear让错误标识改回为0,
							让我们可以继续输入,再清空流数据继续输入.
							如果我们没有了cin.clear,则会进入死循环,
							其过程为我们输入了英文字母,它的状态标识便为fail,
							当运行到条件判断时,便总是回到错误的条件表示里,
							并且我们再也没办法输入,因为错误的表示关闭了cin,所以会进入死循环. */                      
            
			cin.sync();   //清空输入流                 
        }                 
        else                 
        {                         
            cout<<number;                         
            break;                 
        }         
    }         
    system("pause"); 
} 

/*

#include <iostream>
using namespace std;

int main()
{
    int number;
    do{
        cin >> number;
        
		.....
        
        if(cin.fail())
            cout << "Not a number " << endl;
    }while(!cin.fail());
    cout << "number is " << number << endl;
    system("pause");
    return 0;
}

*/

