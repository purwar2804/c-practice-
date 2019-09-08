#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f[n];
    int i,r;
    f[1]=0;
    for(i=2;i<=n;i++)
    {
        r=f[i-1]+1;
        if(n%2==0)
        {
            r=min(r,f[i/2]+1);
        }
        if(n%3==0)
        {
            r=min(r,f[i/3]+1);
        }
        f[i]=r;
    }
    cout<<f[n];
}
