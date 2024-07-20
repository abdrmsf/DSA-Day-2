#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
void getDigits(int num)
{
    int n=num;
    int count=0;
    while(n!=0)
    {
        count+=1;
        n=n/10;
    }
    while(num!=0)
    {
        int dig=num/(int)pow(10,count-1);
        cout<<dig<<" ";
        num=num%(int)pow(10,count-1);
        count--;
    }
}
int main()
{
int n;
cin>>n;
getDigits(n);
return 0;
}