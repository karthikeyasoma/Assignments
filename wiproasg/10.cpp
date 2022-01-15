#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int area= n*m;
    int prev = 0;
    int ans =0;
    while(area>=1)
    { 

       ans++;
       ans+=prev;
       area=area/2;
       prev=area;  

    }
    cout<<ans;
    return 0;
}