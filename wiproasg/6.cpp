#include<bits/stdc++.h>
using namespace std;
int help(vector<int>&arr,int i,int n,vector<vector<int>>&dp,int wt)
{
    if(i==n || wt==0)
    return 0;
    
    if(dp[i][wt]!=-1)
    return dp[i][wt];
 
    if(i+1<=wt)
    {
      int x=arr[i]+(help(arr,i,n,dp,wt-(i+1)));
      int y = help(arr,i+1,n,dp,wt);
      dp[i][wt]=max(x,y);
    }
    else
    {
     dp[i][wt] = help(arr,i+1,n,dp,wt);
    }
    return dp[i][wt];
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    int wt = n; 
    cout<<help(arr,0,n,dp,wt);
    return 0;
}