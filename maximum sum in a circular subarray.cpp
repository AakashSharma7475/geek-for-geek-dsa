#include <iostream>

using namespace std;

int normal_max_sum(int * arr,int n)
{
int res=arr[0],curr=arr[0];

    for(int i=1;i<n;i++)
    {
        curr=max(curr,curr+arr[i]);
        res=max(res,curr);
    }
    return res;
}
int maxdiff_in_circular_array(int *arr,int n)
{
    int normalsubarraysum=normal_max_sum(arr,n);
    if(normalsubarraysum<0)
    return normalsubarraysum;
    int normalsum=0;
    for(int i=0;i<n;i++)
    {
        normalsum+=arr[i];
        
        arr[i]=-arr[i];
        
    }
    int minsum=normal_max_sum(arr,n);
    int circularsum=normalsum+minsum;
    return max(circularsum,normalsubarraysum);
    
    
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

    cout<<maxdiff_in_circular_array(arr,n);
    return 0;
}
