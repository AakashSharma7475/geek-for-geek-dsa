#include <iostream>
using namespace std;
int peak_element_binary_search(int arr[],int n)
{
    /*the main idea is we find the mid and check either left side of it is higher or right
    becase the higher side always contain a peak element in the case of decreasing order like
        {70,60,50,40,45} the mid is 50 but 60 is higher than it so continueing that we find 
    the left most is the highest and no bigger neighour than itself */
    
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid==0||arr[mid-1]<=arr[mid]&&mid==n-1||arr[mid+1]<=arr[mid])
        {
            return mid;
        }
        
        if(mid!=0&&arr[mid-1]>=arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
    }
    return -1;
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
    cout<<peak_element_binary_search(arr,n);

    return 0;
}
