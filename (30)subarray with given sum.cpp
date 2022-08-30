#include <iostream>

using namespace std;
string subarrayWithGivenSum(int *arr ,int n,int search)
{
    int s=0,res=0;
    for(int i=0;i<n;i++)
    {
        
        res+=arr[i];   
        while(res>search)
        {
        res=res-arr[s];
        s++;
        }
        if(res==search)
        return "yes";
    }
    return "no";
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
    cout<<subarrayWithGivenSum(arr,n,search);

    return 0;
}
