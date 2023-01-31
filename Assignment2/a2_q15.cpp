#include<iostream>
using namespace std;
int main()
{
    int n,stars,spaces,oval,ival,row,col;
    cout<<"Enter a number: ";
    cin>>n;
    stars = 1;
    spaces = n/2;
    oval = 1;
    for(row=1;row<=n;row++)
    {
        ival=oval;
        for(col=1;col<=spaces;col++)
        {
            cout<<"\t";
        }
        for(col=1;col<=stars;col++)
        {
            cout<<ival<<"\t";
            if(col<=stars/2)
            {
                ival++;
            }
            else{
                ival--;
            }
        }
        cout<<endl;
        if(row<=n/2)
        {
            spaces--;
            stars+=2;
            oval++;
        }
        else
        {
            spaces++;
            stars-=2;
            oval--;
        }
    }
}
