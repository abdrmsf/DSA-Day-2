#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
string getevenorodd(int n)
{
    if (n%2==0)
        return "even";
    else
        return "odd";
}
int main()
{
    int n;
    cin>>n;
    cout<<"Number is"<<" ";
    cout<<getevenorodd(n);
return 0;
}