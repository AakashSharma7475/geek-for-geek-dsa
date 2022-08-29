#include <iostream>
#include <limits.h>
using namespace std;

int sliding_window_technique(int *arr,int n,int k)
// 1 8 30 -5 20 7
{
    
    int calculation=0;
    int res=INT_MIN;
    for(int i=0;i<k;i++)
    {
        calculation+=arr[i];
    }
    res=max(res,calculation);
    for(int i=k;i<n;i++)
    {
        calculation=(calculation-(arr[i-k]))+arr[i];
        res=max(res,calculation);
        
    }
    return res;
    
    
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
    int k;
    cin>>k;
    cout<<sliding_window_technique(arr,n,k);
    return 0;
}
