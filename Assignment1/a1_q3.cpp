#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j;
    cout<<"Enter count of integers to be tested: ";
    cin>>t;
    for(i=1,j=2;t>0,i<=t,j<n;i++,j++)
    {
        cout<<"Enter number: ";
        cin>>n;
        if(n==1 || n%j==0)
            cout<<"not prime"<<endl;
        else
            cout<<"prime"<<endl;
    }
}
