#include<iostream>
using namespace std;
int prime(int n)
{
    if(n==2 || n==3 ||n==5 || n==7)
    {
        return true;
    }
    else if(n%2==0 || n%3==0 || n%5==0 || n%7==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int n;
    cin>>n;
    bool a=prime(n);
    if(a==true)

    {
        cout<<"prime\n";
    }
    else{cout<<"not prime";}
}
