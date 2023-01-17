#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter number: ";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            while(n%i==0)
            {
                cout<<i<<" ";
                n=n/i;
            }
        }
    }
}
