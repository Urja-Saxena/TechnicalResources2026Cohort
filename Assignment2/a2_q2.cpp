#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"Enter rows: ";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=row;col>=1;col--)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
}
