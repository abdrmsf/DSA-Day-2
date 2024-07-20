#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int greatest(int a,int b,int c)
{
    if (a>b && a>c)
    {
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max=greatest(a,b,c);
    cout<<"The greatest is"<<endl;
    cout<<max<<endl;
    return 0;
}