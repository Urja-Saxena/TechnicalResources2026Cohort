#include<iostream>
using namespace std;
int main()
{
    int n,r,ans,counter;
    cout<<"Enter number: ";
    cin>>n;
    counter=1;
    ans=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        ans+=counter*(10^(r-1));
        counter++;
    }
    cout<<ans<<endl;
}
