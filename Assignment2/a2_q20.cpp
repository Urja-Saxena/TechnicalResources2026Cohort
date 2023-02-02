#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            if(col==1||col==n)
            {
                cout<<"*\t";
            }
            else if(row>n/2 && (row==col||row+col==n+1))
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
