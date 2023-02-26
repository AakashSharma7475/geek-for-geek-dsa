#include<bits/stdc++.h>
using namespace std;
void bubblesort(int n,int arr[])
{
    int j=n-1;
    while(j>0)
    {
        
        for(int i=0;i<j;i++)
        {
            
            if(arr[i]>arr[i+1])
            {
            int swap=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=swap;
            }
        }
        j--;
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
    bubblesort(n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
