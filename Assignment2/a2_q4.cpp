#include<iostream>
using namespace std;
int main()
{
    int n,row,col,s;
    cout<<"Enter a number: ";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        int NoOfSpaces = n-row;
        for(s=0;s<=NoOfSpaces;s++)
        {
            cout<<"\t";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
}
