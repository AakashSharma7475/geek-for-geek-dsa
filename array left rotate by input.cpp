#include <iostream>

using namespace std;
void Left_rotate_array_by_d(int *arr,int n,int d)
{
    int res;
    d=d%n;
    for(int i=d;i>0;i--)
    {
        res=arr[i-1];
        for(int j=i; j<n; j++)
        {
            arr[j-1]=arr[j];          
        }
        arr[n-1]=res;
        n=n-1;
    }
}

int main()
{
    int n,d;
    cin>>n;
    int b=n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>d;
    Left_rotate_array_by_d(arr,n,d);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
