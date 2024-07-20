#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
float kmtomiles(int d)
{
    float miles=d*0.621371;
    return miles;
}
int main()
{
int d;
cin>>d;
cout<<" Distance from "<<d<<" km to miles is "<<kmtomiles(d);
return 0;
}