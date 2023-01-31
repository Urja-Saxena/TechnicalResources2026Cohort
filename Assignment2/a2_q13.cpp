#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int row=0;row<n;row++)
    {
        int val=1;
        for(int col=0; col<=row;col++)
        {
            cout<<val<<"\t";
            val=(val*(row-col))/(col+1);
        }
        cout<<endl;
    }
}
