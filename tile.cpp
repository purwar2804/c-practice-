#include<iostream>
using namespace std;
int tiles(int n,int m)
{
    int i,count[n+1];
    count[0]=0;
    for(i=1;i<=n;i++)
    {
        if(i==m)
        {
            count[i]=2;
        }
        else if(i<m)
        {
            count[i]=1;
        }
        else
        {
            count[i]=count[i-1]+count[i-m];
        }
    }
    return count[n];
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<tiles(n,m);
}
