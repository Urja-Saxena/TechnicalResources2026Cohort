#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows - ";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            if(row==col||row+col==n+1)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"\t";
            }
        }
        cout<<endl;
    } 

}
