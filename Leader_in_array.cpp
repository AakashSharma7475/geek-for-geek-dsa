#include <iostream>

using namespace std;
void Leader_in_array(int *arr,int n)
{
    cout<<arr[n-1]<<" ";
    int res=n-1;
    
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[res]){
        
        cout<<arr[i]<<" ";
        res=i;
        }
        
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
    Leader_in_array(arr,n);
    
    return 0;
}
