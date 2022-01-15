#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    int z=0;
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            z++;
        }

    }
    cout<<k<<"-"<<z;


    return 0;
}