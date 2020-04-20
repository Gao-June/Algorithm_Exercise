//整数转2进制每次都除2，小数转2进制每次都乘2 


#include <iostream>
#include <string>

using namespace std;

int main()
{
	double num=0.3; 
	string aa="0.";
	
	while(num>0)
	{
		double r = num*2;
		if(r>=1)
		{
			aa += "1";
			num = r-1;
		}
		else
		{
			aa+="0";
			num=r;
		}
		if(aa.length()==35)	//算上了 0. 所以考虑35位当还能进行到33位时证明溢出 
		{
			cout << "ERROR" << endl;
			return 0;
		}
	} 
	cout << aa << endl;

	return 0;
}
