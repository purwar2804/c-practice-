#include<iostream>
using namespace std;
void leftrotationone(int a[],int d,int n)
{

    int i,temp;
    temp=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=temp;
}
void leftrotation(int a[],int d,int n)
{
    int i;
    for(i=0;i<d;i++)
    {
        leftrotationone(a,d,n);
    }
}
void print(int a[],int n)
{

    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{

    int a[100];
    int d,n;
    cout<<"enter number of element\n";
    cin>>n;
    cout<<"enter d\n";
    cin>>d;
    int i;
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }
    leftrotation(a,d,n);
    print(a,n);
}
