/*
和 “二进制中1的个数”思想一样。
若这个数是2的整数次方，那么（除了第0位）其他位置只
能有1个是1 （其他都是0） 

--法2：  直接 n&1 ==0
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	if( ((n-1)&n) ==0 )
	{
		cout << "这个数是2的整数次方" << endl;
	}
	else
	{
		cout << "不是" << endl;
	}


	return 0;
}
