#include <iostream>
using namespace std;
int main()
{
	//法2  
	int n,ans=0;
	cin >> n;	
	
	while(n)
	{
		n = (n-1)&n;
		ans++;
	}
	
	cout << ans << endl;
	
#if 0	//法1 
	int n;
	cin >> n; 
	int ans=0;
	while(n)
	{
		if(n&1)		//每次都 & 1 
		{
			ans++;
		}
		n=n>>1;		//右移1位 
	}
	cout << ans << endl;
#endif

	return 0;
}
