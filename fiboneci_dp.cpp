#include<iostream>
using namespace std;
int fibo(int n)
{
    int f[10];
    f[0]=0;f[1]=1;
    int i;
    for(i=2;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
}
