#include<iostream>
using namespace std;
int main()
{
    int low,high,n,i;
    cout<<"Enter lower limit: ";
    cin>>low;
    cout<<"Enter higher limit: ";
    cin>>high;
    for(n=low;n<=high;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                break;
        }
        if(i==n)
            cout<<n<<endl;
    }
}
