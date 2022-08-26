#include <iostream>

using namespace std;
int maxdiff(int *arr,int n)
{
    int min_value=arr[0];
    int res=arr[1]-arr[0];
    for(int i=1;i<n;i++)
    {
        res=max(res,arr[i]-min_value);
        min_value=min(min_value,arr[i]);
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
    cout<<maxdiff(arr,n);
    

    return 0;
}
