#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int i,gcd;
    if(a<b)
    {
        for(i=1;i<=a;i++)
        {
            if(a%i==0 &&b%i==0)
            {
                gcd=i;
            }
        }
    }
    else
    {
        for(i=1;i<=b;i++)
        {
            if(a%i==0 && b%i==0)
            {
                gcd=i;
            }
        }
    }
    return gcd;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}
