#include<iostream>
using namespace std;
int ispalindrome(char s[],int n)
{
    int l=1;
    while(l<n)
    {
        if(s[l++]!=s[n--])
        {
            cout<<"string is not palindrome\n";
            return 0;
        }
    }
    cout<<"string is palindrome\n";
}
int main()
{
    char s[100];
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    ispalindrome(s,n);
}
