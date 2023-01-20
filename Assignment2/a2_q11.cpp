#include<iostream>
using namespace std;
int main()
{
    int n,row,col,val=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<val<<"\t";
            val++;
        }
        cout<<"\n";
    }
}
