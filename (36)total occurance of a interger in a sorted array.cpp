#include<bits/stdc++.h>
using namespace std;
int firstoccur(int arr[],int n,int x)
{
    
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x<arr[mid])
        high=mid-1;
        else if(x>arr[mid])
        low=mid+1;
        else 
        {
            if(mid==n-1||arr[mid-1]!=arr[mid])
            return mid;
            else
            
            high=mid-1;
            
        }
    }
    return -1;
}

int lastoccur(int arr[],int n,int x)
{
    
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x<arr[mid])
        high=mid-1;
        else if(x>arr[mid])
        low=mid+1;
        else 
        {
            if(mid==n-1||arr[mid+1]!=arr[mid])
            return mid;
            else
            
            low=mid+1;
            
        }
    }
    return -1;
}
int totaloccur(int arr[],int n,int x)
{
    int res=firstoccur(arr,n,x);
    int res1=lastoccur(arr,n,x);
    
    if(res==-1)
    {
    return -1;
    }
    
    return (res1-res)+1;
}
int
main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<totaloccur(arr,n,x);
    

  return 0;
}
