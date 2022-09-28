/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int repeated_number_in_unsorted_array(int arr[],int n)
{
    int slow=arr[0]+1;
    int fast=arr[0]+1;
    
    do{
        slow=arr[slow]+1;
        fast=arr[arr[fast]+1]+1;
    }
    while(slow!=fast);
    
    slow=arr[0]+1;
    while(slow!=fast)
    {
        slow=arr[slow]+1;
        fast=arr[fast]+1;
    }
    return slow-1;
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
    cout<<repeated_number_in_unsorted_array(arr,n);
    

    return 0;
}
