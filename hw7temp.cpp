#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
float CeltoFar(int c)
{
    float far=1.8*c+32;
    return far;
}
int main()
{
float c;
cin>>c;
cout<<"Temperature in fahrenhiet is "<<CeltoFar(c);
return 0;
}