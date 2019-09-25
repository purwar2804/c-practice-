#include<iostream>
using namespace std;
void leftrotate(int n,int d,int arr[])
{
    int i,a[100],b[100],j=0,c[100];

    for(i=d-1;i>=0;i--)
    {
        c[j]=arr[i];
        j++;
    }
    for(i=n-1;i>=d;i--)
    {
        c[j]=arr[i];
        j++;
    }
    j=0;
    for(i=n-1;i>=0;i--)
    {
        a[j]=c[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
int main()
{
    int n,d,arr[100];
    cin>>n;
    cin>>d;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    leftrotate(n,d,arr);
}
