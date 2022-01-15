#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=0;
    cin>>n;
    int s=0;
    while(n--)
    {
    cin>>x;
    if(x!=0)
    {
    s+=c;
    }
    else
    {
        c++;
    }
   }
   cout<<s;
}