#include<iostream>
using namespace std;
int main()
{
    int n,row,s;
    cout<<"Enter a number: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        int NoOfSpaces=n-row;
        for(s=0;s<NoOfSpaces;s++)
        {
             cout<<"\t";
        }
        cout<<"*";
        cout<<"\n";
    }
}
