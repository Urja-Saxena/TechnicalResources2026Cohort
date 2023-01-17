#include<iostream>
using namespace std;
int main()
{
    int k,n,nod=0,num=n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter number of rotations: ";
    cin>>k;
    while(num!=0)
    {
        num/=10;
        nod++;
    }
    k=k%nod;
    if(k<0)
    {
        k+=nod;
    }
    int div=10^k;
    int mult=10^(nod-k);
    int rem=n%div;
    int q=n/div;
    int newn=(rem*mult)+q;
    cout<<newn<<endl;
}
