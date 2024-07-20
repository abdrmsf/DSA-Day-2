#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int getReverse(int num)
{
    int dig,rev=0;
    while(num!=0)
    {
        dig=num%10;
        rev=rev*10+dig;
        num=num/10;
    }
    return rev;
}
int main()
{
int n;
cin>>n;
cout<<"The reverse of "<<n<<" is "<<getReverse(n);
return 0;
}