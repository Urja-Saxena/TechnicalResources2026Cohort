#include<iostream>
using namespace std;
int main()
{
    int n,row,col,s;
    cout<<"Enter a number: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        int NoOfSpaces=row-1;
        for(s=0;s<NoOfSpaces;s++)
        {
             cout<<"\t";
        }
        cout<<"*";
        cout<<"\n";
    }
}
