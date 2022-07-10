
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,y;
    cin>>n;
    cout<<"which bit you want to check"<<endl;
    cin>>y;
    
    //check with right shift 
    // n=n>>y-1;
    if((n>>(y-1))&1)
    {
        cout<<"set";
    }
    else
    {
        cout<<"not set";
    }
    
    
    

    return 0;
}
