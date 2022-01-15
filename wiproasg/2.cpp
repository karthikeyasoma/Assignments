#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    s = to_string(n);
    reverse(s.begin(),s.end());
    int ans =stoi(s);
    cout<<ans;
    
    return 0;
}