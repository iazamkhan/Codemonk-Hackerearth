//Program to print the number of occurrences of most occurring letter in a string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,n;
    cin>>n;
    cin>>str;
    sort(str.begin(),str.end());
    int ans=0,c=1;
    for(i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
            c++;
        else
            c=1;
        ans=max(ans,c);
    }

    cout<<endl<<ans;
    return 0;
}
