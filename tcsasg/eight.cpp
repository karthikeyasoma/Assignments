#include<bits/stdc++.h>
using namespace std;
    int main()
    {
        int n;
        cin>>n;
        if(n==0)
        {
        cout<<0;
        return 0;
        }
        int product=1;
        while(n!=0)
        {
            int r=n%10;
            n=n/10;
            product=product*r;
        }
        cout<<product;
        return 0;
    }