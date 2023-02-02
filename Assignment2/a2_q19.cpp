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
            if(row==1)
            {
                if(col<=n/2+1 || col==n)
                    cout<<"*\t";
                else
                    cout<<"\t";
            }
            else if(row>1 && row<n/2+1)
            {
                if(col==n/2+1 || col==n)
                    cout<<"*\t";
                else
                    cout<<"\t";
            }
            else if(row==n/2+1)
                cout<<"*\t";
            else if(row>n/2+1 && row<n)
            {
                if(col==1 || col==n/2+1)
                    cout<<"*\t";
                else
                    cout<<"\t";
            }
            else
            {
                if(col==1 || col>=n/2+1)
                    cout<<"*\t";
                else
                    cout<<"\t";
            }
        }
        cout<<endl;
    }
}
