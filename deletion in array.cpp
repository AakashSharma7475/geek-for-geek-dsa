#include <iostream>

using namespace std;
int deletion(int arr[],int n,int search)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        break;
        
    }
    if(i==n)
        return n;
    
    for(int j=i;i<n-1;i++)
    {
        arr[i]=arr[i+1];
        
    }
    for(i=0;i<n-1;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    return n-1;
    
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
    int search;
    cin>>search;
    cout<< deletion(arr,n,search);
    
    
    return 0;
}
