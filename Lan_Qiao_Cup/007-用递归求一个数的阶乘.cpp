#include <iostream>

using namespace std;

int f(int n)	//求n的阶乘 
{
	//出口
	if(n==1)
	{
		return 1;
	} 

	return ( n*f(n-1) );
	
}


int main()
{
	int n;
	cin >> n;
	
	cout << f(n) << endl; 

	return 0;
}
