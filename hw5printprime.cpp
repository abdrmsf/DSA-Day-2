#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
void printPrime(int num)
{
    for(int i=1;i<=num;i++)
    {
        bool flag=true;
        if (i==1)
        {
            continue;
        }
        for(int j=2;j<i;j++)
        {
            if (i%j==0)
            {
                flag=false;
                break;
            }
        }
        if (flag)
            cout<<i<<" is prime"<<endl;
    }
}
int main()
{
int n;
cin>>n;
printPrime(n);
return 0;
}