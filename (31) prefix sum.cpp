#include <iostream>

using namespace std;

int prefixSum(int *arr ,int n,int l,int r)
{
    for(int i=1;i<n;i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    if(l==0)
    return arr[r];
    
    return (arr[r]-arr[l-1]);
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
    
    int l,r;
    cin>>l>>r;
    
    cout<<prefixSum(arr,n,l,r);
    return 0;
}
