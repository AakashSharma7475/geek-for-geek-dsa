#include <iostream>

using namespace std;
void frequencies(int *arr,int n)
{
    if(n==1){
        cout<<arr[0]<<" "<<1;
        return;
    }
    
    
    
    
    int res=1;
    for(int i=1;i<=n;i++)
    {
        
        if(arr[i]==arr[i-1])
        res++;
        else 
        {
            cout<<arr[i-1]<<" ";
            cout<<res<<endl;
            res=1;
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
    
    frequencies(arr,n);
    

    return 0;
}
