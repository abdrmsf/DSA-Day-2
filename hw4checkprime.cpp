#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
string getPrime(int n)
{   
    bool flag=true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    if (flag)
        return "Prime";
    else
        return "Not Prime";
}
int main()
{
    int n;
    cin>>n;
    cout<<"Number is"<<" ";
    cout<<getPrime(n);
    return 0;
}