/*�ڴ����к졢�ơ������ס���������ɫ�������ɸ���ÿ�δӿڴ���ȡ������ͬ��ɫ��С��ͳ�Ʋ�������е�ȡ����*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	enum color_set{red,yellow,blue,white,black};
	color_set color;
	int i,j,k,counter=0,loop;
	for(int i=red;i<=black;++i)
		for(int j=red;j<=black;++j)
		if(i!=j){					//ǰ������ɫ����ͬ          
			for(int k=red;k<=black;++k)
			if(k!=i&&k!=j){					//��������ͬ��ǰ����������Ҫ�� 
				counter++;
				if(counter%22==0){				//ÿ����ʾ22�� 
					cout<<"������س�����";
					cin.get(); 
				}
				cout<<setw(15)<<counter;    //�������ÿһ��Ϊһ��ȡ�� 
				for(int loop=1;loop<=3;++loop)
				{
					switch(loop)
					{
						case 1:color=(color_set)i;break;
						case 2:color=(color_set)j;break;
						case 3:color=(color_set)k;break;
					}
					switch(color)
					{
						case red:cout<<setw(15)<<"red";break;
						case yellow:cout<<setw(15)<<"yellow";break;
						case blue:cout<<setw(15)<<"blue";break;
						case white:cout<<setw(15)<<"white";break;
						case black:cout<<setw(15)<<"black";break;
					}
				}
				cout<<endl;				//ÿ���һ�к��� 
			}
		}
		cout<<endl;
		cout<<setw(30)<<"����"<<counter<<"��ȡ��"<<endl; 
		return 0;
} 
