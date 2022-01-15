#include<bits/stdc++.h>
using namespace std;
    int main()
    {
        int t;
        cin>>t;
       int n;
       n=t;
       vector<int>arr(n);
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int m;
      m=t;
       vector<int>brr(m);
       for(int i=0;i<m;i++)
       {
           cin>>brr[i];
       }
       int mx=0;
       int left=0;
       for(int i=0;i<t;i++)
       {
           mx=max(mx,arr[i]-brr[i]+left);
           left+=arr[i]-brr[i];
       }
       cout<<mx;
       return 0;
    }