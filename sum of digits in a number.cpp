#include <bits/stdc++.h>

using namespace std;

int sum_of_num(int n)
{
    if(n==0)
    return 0;
    return n%10+sum_of_num(n/10);
}
int main()
{   
    cout<<sum_of_num(456);
    

    return 0;
}
