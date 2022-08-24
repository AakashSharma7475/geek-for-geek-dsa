/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int max_in_array(int *arr, int n)
{   
    
    int largest=0;
    int secondlargest=-1; 
    for(int i=0; i<n; i++)
    {
        if(arr[i]>arr[largest]){
        secondlargest=largest;
        largest=arr[i];
        }
        else if(arr[i]!=arr[largest])
        {
        if(secondlargest==-1||arr[i]>arr[secondlargest])
        secondlargest=i;
        
        }
    }
    
    
    return secondlargest;
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
    
    cout<<max_in_array(arr, n);
    
    
    return 0;
}
