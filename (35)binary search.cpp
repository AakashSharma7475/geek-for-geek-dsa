#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int x)
{
    // cout<<"program begin "<<endl;
    int index=-1;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+high/2;
        if(x<arr[mid])
        high=mid-1;
        else if(x>arr[mid])
        low=mid+1;
        else if(x==arr[mid])
        {
        return mid;
        }
    }
    return -1;
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
    cout<<binarysearch(arr,n,x);
    

  return 0;
}
