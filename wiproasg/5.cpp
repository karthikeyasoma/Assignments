#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    int mx=0;
    int z=0;
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    int f[4]={0};
  for(int i=0;i<n;i++)
  {
   if(arr[i]==1)
   {
       f[1]++;
   }
   else if(arr[i]==2)

   {
       f[2]++;
   }
   else
   {
       f[3]++;
   }
   mx=max(f[1],max(f[2],f[3]));
  }
  int tot=f[1]+f[2]+f[3];
  cout<<tot-mx;
    return 0;
}