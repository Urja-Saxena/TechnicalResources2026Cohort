#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int spaces=n/2;
    int stars=1;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=spaces;col++)
        {
            if(row==n/2 + 1)
            {
                cout<<"*"<<"\t";
            }
            else
            {
                cout<<"\t";
            }
        }
        for(int col=1;col<=stars;col++)
        {
            cout<<"*\t";
        }
        cout<<endl;
        if(row<=n/2)
        {
            stars++;
        }
        else
        {
            stars--;
        }
    }
}
