#include <bits/stdc++.h>
using namespace std;
void union_of_two_sorted_arrays(int arr1[],int arr2[],int n1,int n2)
{
    int i=0,j=0;
    while(i<n1&&j<n2)
    {
        if(i>0&&arr1[i]==arr1[i-1])
        {
            continue;
        }
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}

int main()
{
    int n1,n2;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
      cin>>n2;
    int arr2[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>arr2[i];
    }
    union_of_two_sorted_arrays(arr1,arr2,n1,n2);

    return 0;
}
