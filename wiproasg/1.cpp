#include<bits/stdc++.h>
using namespace std;
int ncr(int n,int r)
{
    int nfact=1;
    int req = n-r;
    int de=1;
 for(int i=1;i<=n;i++)
 {
   nfact=nfact*i;
   if(i<=req)
   {
    de= de*i;
   }
 }
 cout<<nfact<<" "<<de<<endl;
  int ans  = nfact/(de*2);
  return ans;
}
 int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int ans= 0 ;
    int c=0;
   for(int j=0;j<m;j++)
   {
       c=0;
       for(int i=0;i<n;i++)
       {
        if(arr[i][j]==1)
        {
            c++;
        }
       }
     //  cout<<c<<endl;
  ans+=ncr(c,2);
   }
  cout<<ans;
    return 0;
}