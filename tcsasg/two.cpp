#include<bits/stdc++.h>
using namespace std;
    int main()
    {
        int x;
        cin>>x;
        if(x>=101)
        {
        cout<<"Wrong input";
        return 0;
        }
        bitset<32>v(x);
        int a;
        for(int i=0;i<32;i++)
        {
            if(v[i]==1)
            a=i;
        }
        int sum=0;
        for(int i=0;i<=a;i++)
        {
          int val=~v[i];
          sum+=val==0?0:1<<i;
        }
        cout<<sum;
        return 0;
    }