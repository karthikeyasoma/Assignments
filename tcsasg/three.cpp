#include<bits/stdc++.h>
using namespace std;
    int main()
    {
        string s;
        cin>>s;
        int a=0,b=0;
        for(auto i : s)
        {
            if(i=='#')
            a++;
            if(i=='*')
            b++;
        }
        int x=a==b?0:a>b?-1:1;
        cout<<x;
    }