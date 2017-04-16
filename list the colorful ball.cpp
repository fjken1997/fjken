/*口袋中有红、黄、蓝、白、黑五种颜色的球若干个，每次从口袋中取三个不同颜色的小球，统计并输出所有的取法。*/
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
		if(i!=j){					//前两个颜色不相同          
			for(int k=red;k<=black;++k)
			if(k!=i&&k!=j){					//第三个球不同于前两个，满足要求 
				counter++;
				if(counter%22==0){				//每屏显示22行 
					cout<<"请输入回车继续";
					cin.get(); 
				}
				cout<<setw(15)<<counter;    //下面输出每一行为一种取法 
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
				cout<<endl;				//每输出一行后换行 
			}
		}
		cout<<endl;
		cout<<setw(30)<<"共有"<<counter<<"种取法"<<endl; 
		return 0;
} 
