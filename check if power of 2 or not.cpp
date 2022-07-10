#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   
   if(n&(n-1))
    {
        cout<<"its not a power of two";
    }
    else
    {
        cout<<"its a power of two";
    }
    
    return 0;
}
