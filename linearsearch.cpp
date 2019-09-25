#include<iostream>
using namespace std;
void search(int n,int key,int arr[])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"number is find\n";
        }
    }
}
int main()
{
    int n,arr[100],key;
    cin>>n;
    cin>>key;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    search(n,key,arr);
}
