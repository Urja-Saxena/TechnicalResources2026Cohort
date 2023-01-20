#include<iostream>
using namespace std;
int main()
{
    int n,row,col,val1=0,val2=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<val1<<"\t";
            int val3=val1+val2;
            val1=val2;
            val2=val3;
        }
        cout<<"\n";
    }
}
