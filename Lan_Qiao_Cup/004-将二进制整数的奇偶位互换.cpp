/*
 eg. 9 -> 1001  => 0110 ->6
方法：将奇数位右移，偶数位左移 
	  将这个数与 101010...10做与运算取出偶数位even；
	  将这个数与 010101...01做与运算取出奇数位odd；
	  将 even右移一位，odd左移一位 ，再做异或就可以了 
*/
#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a ;
	int even = a&0xaaaaaaaa;	//32位1010...10可以四个一组 a=1010
	int odd = a&0x55555555;	//5 = 0101
	int b=(even>>1)^(odd<<1);

	cout << b << endl;

	return 0;
}
