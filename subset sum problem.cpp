#include <iostream>

using namespace std;
int ssp(int arr[],int n,int sum)
{
    if(n==0)
    return (sum==0)? 1:0;
    
    return ssp(arr,n-1,sum)+ssp(arr,n-1,sum-arr[n-1]);
    
}
int main()
{
    int arr[]={10,2,6,6,8,5};
    
    cout<<ssp(arr,6,12);
    return 0;
}
