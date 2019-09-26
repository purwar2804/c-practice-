#include<iostream>
using namespace std;
int binarysearch(int l,int r,int key,int arr[])
{
    int mid=(l+r)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
        r=mid-1;
        binarysearch(l,r,key,arr);
    }
    else
    {
        l=mid+1;
        binarysearch(l,r,key,arr);
    }
}
int main()
{
    int n,key,arr[100],i;
    cin>>n;
    cin>>key;
    int l,r;
    l=0;
    r=n-1;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<binarysearch(l,r,key,arr);

}
