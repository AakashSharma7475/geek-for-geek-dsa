#include <bits/stdc++.h>

using namespace std;
void merge_function_of_merge_sort(int arr[],int low,int mid,int high)
{
    int leftsize=mid-low+1;
    int rightsize=(high-mid);
    int left[leftsize];
    int right[rightsize];
    for(int i=0;i<leftsize;i++)
    {
        left[i]=arr[low+i];
    }
    for(int i=0;i<rightsize;i++)
    {
        right[i]=arr[(mid+1)+i];
    }
    int i=0;
    int j=0;
    int k=low;
    while(i<leftsize&&j<rightsize)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<leftsize)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<rightsize)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
    // return;
}
void mergesort(int arr[],int low,int high)
{
    if(high>low)
    {
        int mid=low+((high-low)/2);
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge_function_of_merge_sort(arr,low,mid,high);
    }
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
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}
