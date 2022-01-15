#include <bits/stdc++.h>
using namespace std;
int findMaximumPieces(int n)
{
 int x = n / 2;
 return ((x + 1) * (n - x + 1));
}
int main()
{
 int n;
 cin>>n;
 cout <<findMaximumPieces(n);
 return 0;
}