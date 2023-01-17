#include<iostream>
using namespace std;
int main()
{
    float marks;
    cout<<"Enter marks of student: ";
    cin>>marks;
    if(marks>90)
        cout<<"Excellent";
    else if((marks>80) && (marks<=90))
        cout<<"Good";
    else if((marks>70) && (marks<=80))
        cout<<"Fair";
    else if((marks>60) && (marks<=70))
        cout<<"Meets expectations";
    else
        cout<<"Below par";
}
