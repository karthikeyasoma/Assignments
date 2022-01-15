#include<bits/stdc++.h>
using namespace std;
int help(int n)
{
    int c=0;
    while(n>=1)
    {
    n/=2;
    c++;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<help(n);

    return 0;
}