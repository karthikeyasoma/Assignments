#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    vector<int>v;
    int x;
    int k=0;
    while(cin>>x)
    {
        v.push_back(x);
        k++;
    }
    if(k>n)
    cout<<"WRONG INPUT";
    else
    for(int i=0;i<k-1;i++)
    {
if(v[i]==v[i+1])
v[i+1]=v[i]+1;
    }
    int s=accumulate(v.begin(),v.end(),0);
    cout<<s;
}