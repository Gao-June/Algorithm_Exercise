//相同的元素异或为0
//对a[]中有1个元素是多于的，那么构造一个数组为正常排序
//将这两个数组做异或，只有重复项出现了三次，其他的都出现了两次。 


#include <iostream>

using namespace std;

int main()
{
	int a[11]={1,2,3,4,5,6,7,8,9,4,10};
	int b[10]={1,2,3,4,5,6,7,8,9,10};
	int c=b[0];
	for(int i=1; i<10; i++)
	{
		c = c^b[i];
	}
	for(int i=0; i<11; i++)
	{
		c = c^a[i];
	}
	cout << c << endl;

	return 0;
}
