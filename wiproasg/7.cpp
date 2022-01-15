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
   int k;
   cin>>k;
   for(int i=0;i<n;i++)
   {
       arr[i]=arr[i]*k;
   }
   sort(arr.begin(),arr.end(),greater<int>());
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
    return 0;
}