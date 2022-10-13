/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
void mergre_two_sorted_arrays(int arr[],int arr1[],int n,int n1)
{
    int i=0;
    int j=0;
 
        while(i<n&&j<n1)
        {
            if(arr[i]<=arr1[j])
            {
                cout<<arr[i]<<" ";
                i++;
            }
            else 
            {
                cout<<arr1[j]<<" ";
                j++;
            }
        }
        if(i<n)
        for(int p=i;p<n;p++)
        {
            cout<<arr[p]<<" ";
        }
        for(int k=j;k<n1;k++)
        {
            cout<<arr1[k]<<" ";
        }
        
    }
int main()
{
    int n,n1;
    cout<<"enter the size of first array = ";
    cin>>n;
    cout<<"\nenter the elements of 1st array = ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nenter the size of second array = ";
    cin>>n1;
    int arr1[n1];
    cout<<"\nenter the elements of 2nd array = ";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    merge_two_sorted_arrays(arr,arr1,n,n1);
    
    return 0;
    
}
