/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int searching_in_infinite_sorted_array(int arr[],int n,int x)
{
    int i=1;
    int high=arr[1];
    int low=0;
    
    while(x>high)
    {
        if(i>n)
        {
        return -1;
        }
        low=i;
        i=i*2;
        high=arr[i];
    }
    high=i;
    int res=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x<arr[mid])
        {
            high=mid-1;
        }
        else if(x>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            res=mid;
            return res;
        }
    }
    return res;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int n=sizeof(arr) / sizeof(int);
    cout<<searching_in_infinite_sorted_array(arr,n,17);

    return 0;
}
