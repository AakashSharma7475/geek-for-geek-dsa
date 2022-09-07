



#include <bits/stdc++.h>
using namespace std;
bool equally_divided_in_three_parts(int arr[],int n)
{
    // cout<<"check"<<endl;
    int prefix_sum=0,res=0,counter=0;
    for(int i=0;i<n;i++)
    {
        prefix_sum +=arr[i];
    }
    // cout<<"check"<<endl;
    if(prefix_sum%3==0)
    {
        // cout<<"check"<<endl;
        for(int i=0;i<n;i++)
        {
            res+=arr[i];
            if(res==prefix_sum/3)
            {
                counter++;
                res=0;
            }
            else if(res>prefix_sum/3)
            {
                return false;
            }
        }
    }
    
    else
    return false;
    
    
    return true;
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
    cout<<equally_divided_in_three_parts(arr,n);

    return 0;
}
