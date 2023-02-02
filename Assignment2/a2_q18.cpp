#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int spaces=0;
    int stars=n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=spaces;col++)
            cout<<"\t";
        for(int col=1;col<=stars;col++)
        {
            if(row>1 && row<=n/2 && col>1 && col<stars)
                cout<<"\t";
            else
                cout<<"*\t";
        }
        cout<<endl;
        if(row<=n/2)
        {
            stars-=2;
            spaces++;
        }
        else
        {
            spaces--;
            stars+=2;
        }
    }
}
