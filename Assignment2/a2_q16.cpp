#include<iostream>
using namespace std;
int main()
{
    int n,stars,spaces,row,col;
    cout<<"Enter a number: ";
    cin>>n;
    stars=1;
    spaces=2*n-3;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=stars;col++)
        {
            cout<<col<<"\t";
        }
        for(col=1;col<=spaces;col++)
        {
            cout<<"\t";
        }
        if(row==n)
        {
            stars--;
        }
        for(col=stars;col>=1;col--)
        {
            cout<<col<<"\t";
        }
        cout<<endl;
        stars++;
        spaces-=2;
    }
}
