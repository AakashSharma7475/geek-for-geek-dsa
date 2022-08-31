#include <iostream>

using namespace std;
    
bool equilibrium_point(int *arr,int n)
{
    int sum=0,leftsum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(leftsum==sum-arr[i])
        return true;
        
        leftsum+=arr[i];
        sum-=arr[i];
    }
    return false;
}
int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<equilibrium_point(arr,n);
    return 0;
}
