/*
思想：
2个相同的2进制做不进位加法， 结果为0
10个相同的10进制数做不进位加法，结果为0
那么 k 相同的 k进制数做不进位加法，结果为0
*/
//222 333 888 4 = 6 9 24 4 = 43 


#include <iostream>
#include <cmath>    //pow()

using namespace std;

int main()
{
	int num,k; //num是多少个数 k是出现k次
	cin >> num >> k;

	int a[num];
	int b[32] = {0}; //用于存 不进位 k进制 的每位数 
	
	for(int i = 0;i < num;i++)
	{
		cin >> a[i];
	}
	
	for(int i = 0;i < num; i++)
	{
		int j = 0;
		while(a[i] != 0)      // key point
		{
			b[j] = b[j] + a[i] % k; //这个位本来的加上下一个数%k的余数 
			b[j] = b[j] % k;  //如果达到K则进行不进位的取余 
			
			a[i] = a[i] / k;
			j++;
		}
	}
	
	int result=0;
	for(int i = 0; i < 32;i++)
	{
		result = result + b[i] * pow(k,i);//将k进制不进位的数转为10进制 
	}
	cout << result ;
	return 0;
}


