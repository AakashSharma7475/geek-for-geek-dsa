#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,res=0;
    cin>>n;
    while(n>0)
    {
        n=n&(n-1);
        res++;
    }
    cout<<"there are "<<res<<" set bits in the number";
    return 0;
}
