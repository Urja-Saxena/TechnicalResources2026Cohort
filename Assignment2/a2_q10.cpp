#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows - ";
    cin>>n;

    int stars=1;
    int spaces=n/2;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=spaces;col++)
        {
            cout<<"\t";
        }
        for(int col=1;col<=stars;col++)
        {
            if(col==1||col==stars)
            {
            cout<<"*"<<"\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
        if(row<=n/2)
        {
            stars+=2;
            spaces--;
        }
        else
        {
            stars-=2;
            spaces++;
        }
    }
}
