/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int low,int high,int x)
{
    
        while(low<=high)
    {
          //error in this part
        cout<<"enter 1"<<endl;
        int mid=low+high/2;
        if(x<arr[mid])
        high=mid-1;
        else if(x>arr[mid])
        low=mid+1;
        else 
        {
        if(x==arr[mid])
        {
        return mid;
        }
        }
    }
    return -1;
}
int location_of_rotation(int arr[],int low,int high,int n)
{
    while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]>arr[n-1])
            {
                low=mid+1;
            }
            else if(arr[mid]==arr[n-1])
            {
                if(arr[mid]>arr[mid-1]||arr[mid]==arr[mid-1]);
                high=mid-1;
            }
            else
            {
                if(arr[mid]<arr[mid-1])
                {
                    return mid;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        return low+high/2;
}
int function_for_this_program(int arr[],int n,int x)
{
    bool tag=0;
    if(arr[n-1]<arr[0])
    {
    tag=1;
    }
    int res;
    if(tag==1)
    {
        int low=0;
        int high=n-1;
        int loworhigh=location_of_rotation(arr,low,high,n);
    
    if(x==arr[loworhigh])
    res= loworhigh;
    else if(x<arr[n-1])
    res= binarysearch(arr,loworhigh,n-1,x);
    else
    res=binarysearch(arr,0,loworhigh-1,x);
    }
    else if(tag==0)
    {
        cout<<"enter"<<endl;
        res=binarysearch(arr,0,n-1,x);
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
    int x;
    cin>>x;
    cout<<function_for_this_program(arr,n,x);

    return 0;
}
