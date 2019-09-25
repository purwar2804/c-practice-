#include<iostream>
using namespace std;
void leftrotateone(int n,int d,int arr[])
{
    int i,temp;
    temp=arr[0];
    for(i=1;i<n;i++)
    {

        arr[i-1]=arr[i];
    }
    arr[i-1]=temp;
}
void leftrotate(int n,int d,int arr[])
{
    for(int i=0;i<d;i++)
    {
        leftrotateone(n,d,arr);
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
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
