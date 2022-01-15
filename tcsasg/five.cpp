#include<bits/stdc++.h>
using namespace std;
    int main()
    {
       int n;
       cin>>n;
       vector<int>arr(n);
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int i=0;
       int j=n-1;
       int sum=0;
       priority_queue<int,vector<int>,greater<int>>pq;
       for(auto i : arr)
       pq.push(i);
       while(pq.size()>=2)
       {
           int x=pq.top();
           pq.pop();
           int y=pq.top();
           pq.pop();
           sum+=x+y;
           pq.push(x+y);
       }
       cout<<sum;
       return 0;
    }