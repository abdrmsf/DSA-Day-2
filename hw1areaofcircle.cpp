#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
float getarea(int r)
{
    return 3.14*r*r;
}
int main()
{
    int r;
    cin>>r;
    cout<<"The area of the circle is"<<endl;
    cout<<getarea(r);
    return 0;
}