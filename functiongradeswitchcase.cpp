#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
char Getgrade(int marks)
{
    switch(marks/10)
    {
        case 10: return 'A';break;
        case 9: return 'A';break;
        case 8: return 'B';break;
        case 7: return 'C';break;
        case 6: return 'D';break;
        default: return 'E';
    }
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