#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
char Getgrade(int marks)
{
    if (marks>=90)
        return 'A'; 
    else if (marks>=80)
        return 'B'; 
    else if (marks>=70)
        return 'C'; 
    else if (marks>=60)
        return 'D'; 
    else
        return 'E'; 
}
int main()
{
    int marks;
    cout<<"The marks of student is"<<endl;
    cin>>marks;
    cout<<"The required grade is"<<endl;
    cout<<Getgrade(marks)<<endl;
    return 0;
}