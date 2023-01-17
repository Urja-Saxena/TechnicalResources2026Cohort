#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
        cout<<"*";
    cout<<endl;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=4-i;j++)
            cout<<" ";
        cout<<"*"<<endl;
    }
    for(i=1;i<=5;i++)
        cout<<"*";
}
