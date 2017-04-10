#include<fstream>
using namespace std;
int main()
{
	ifstream fin("in.txt");
	ofstream fout("out.txt");
	int temp,sum=0;
	while(fin>>temp)    sum+=temp;
	fout<<sum<<endl;
	fin.close();
	fout.close();
return 0;
}
