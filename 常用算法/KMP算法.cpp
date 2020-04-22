/*
    KMP算法需要先知道 next[]，
    next[]是最模式串的预处理（和匹配串无关）,next[3]表示前面相同字串数+1，next数组从1开始
*/

#include <iostream>
#include <string>

using namespace std;



void getnext(string s, int *next)       //next[]从0开始
{

    int i=0;
    int j=-1;
    next[0]=-1;
    int len=s.size();
    while(i<len-1)
    {
        if(j==-1||s[i]==s[j])
        {
            i++;
            j++;
			next[i]=j;
        }
        else
        {
            j=next[j];
        }
    }
}

int KMP(string s1,string s2, int *next)
{
    int i=0;
    int j=0;
    int len1=s1.size();
    int len2=s2.size();
    while( i<len1 &&j <len2 )
    {
        if(j==-1 || s1[i]==s2[j])
        {
            i++;
            j++;
        }
        else
        {
            j=next[j];      //从第j个重新开始
        }
    }
    if(j>=len2)
        return i-len2;
    else
        return -1;
}

int main()
{
    string s1="abcdefgh";
    string s2="cdefg";
    int next[100];
    getnext(s2,next);

    cout << KMP(s1,s2,next) ;

	return 0;
}




