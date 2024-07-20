#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int a=1;a<=n;a++)
{
    for(int k=1;k<=n-a;k++)
    {
        cout<<" ";
    }
    for(int j=1;j<=2*a-1;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}