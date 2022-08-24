#include <iostream>

using namespace std;
int duplicate_in_arry(int *arr,int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res-1]!=arr[i])
        {
        arr[res]=arr[i];
        res++;
        }
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
    cout<<"array before operation"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    n=duplicate_in_arry(arr,n);
    cout<<"array after duplication"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
