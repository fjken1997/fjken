//cin.clear()    cin.sync()    cin.fail()����÷�����

#include <iostream> 
using namespace std; 
int main()  
{        
    int number;         
    while(1)         
    {                 
        cin>>number;                 
        if(!cin)            //�����ɸ�дΪcin.fail()���� if(cin.fail())                 
        {                         
            cout<<"�����д�!����������"<<endl;                         
            cin.clear();   /*�����cin.clear()Ĭ�ϲ���Ϊ0,���޴���,��������.
							����������Ӣ����ĸ'k'ʱ,����״̬��ʶ��Ϊfail,������,
							��cout���û������Ϣ,����cin.clear�ô����ʶ�Ļ�Ϊ0,
							�����ǿ��Լ�������,����������ݼ�������.
							�������û����cin.clear,��������ѭ��,
							�����Ϊ����������Ӣ����ĸ,����״̬��ʶ��Ϊfail,
							�����е������ж�ʱ,�����ǻص������������ʾ��,
							����������Ҳû�취����,��Ϊ����ı�ʾ�ر���cin,���Ի������ѭ��. */                      
            
			cin.sync();   //���������                 
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

