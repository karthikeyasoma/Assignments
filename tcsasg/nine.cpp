#include<bits/stdc++.h>
using namespace std;
    int main()
    {
        string s;
        cin>>s;
        string ans;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='E' && s[i+1]=='F')
            {
                i+=1;
            }
            else if(s[i]=='5' && s[i+1]=='6')
            {
                i+=1;
            }
            else if(s[i]=='G' || s[i]=='&')
            {
            continue;
            }
            else
            {
            ans+=s[i];
            }
        }
        cout<<ans;
        return 0;
    }