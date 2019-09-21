#include<iostream>
using namespace std;
int check(char s[],int l,int r)
{
    while(l<r)
    {
        if(s[l++]!=s[r--])
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    int n;
    cin>>n;
    char s[n+1];
    int i;
    for(i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    int l,r,m;
    cin>>m;
    while(m--)
    {
        cin>>l>>r;
        check(s,l,r);
    }

}
