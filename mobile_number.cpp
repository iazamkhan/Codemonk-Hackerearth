//Program to check whether mobile number is valid or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int flag=0,i;
        cin>>s;
        int n=s.length();
        if(n!=10)
        {
            cout<<"NO"<<endl;
        }
        else if(s[0]=='0')
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(s[i]<48||s[i]>57)
                {
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
