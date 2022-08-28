#include <iostream>
#include<limits.h>

using namespace std;

int max_subarray(int *arr,int n)
{
    int maxsum=arr[0];
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
        maxsum=max(maxsum+arr[i],arr[i]);
        res=max(res,maxsum);
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
    cout<<max_subarray(arr,n);

    return 0;
}
