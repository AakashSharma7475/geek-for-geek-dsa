#include <iostream>

using namespace std;
int stock_buy_sell(int *arr,int n)
{
    int biggest=arr[1],secondbiggest;
    int lowest=arr[0],secondlowest;
    bool tag1=false,tag2=false;
    int res=0;
    for(int i=0;i<=n;i++)
    {
        // if(arr[i]<=lowest)
        // {
        //     secondlowest=lowest;
        //     lowest=arr[i];
        //     tag1=true;
        // }
        // else if(arr[i]>secondlowest)
        // {
        //     secondbiggest=biggest;
        //     biggest=arr[i];
        //     tag2=true;
        // }
        if(arr[i]>=lowest&&arr[i]<biggest||arr[i]<=lowest)
        {
        secondlowest=lowest;
        lowest=arr[i];
        tag1=true;
        }
        else if(arr[i]>=biggest||arr[i]<biggest&&arr[i]>lowest)
        {
        secondbiggest=biggest;
        biggest=arr[i];
        tag2=true;
        }
    
        if(tag1||tag2)
        {
            res=res+max((biggest-lowest),max((secondbiggest-secondlowest),(biggest-secondlowest)));
            tag2=false;
            tag1=false;
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
    
    cout<<stock_buy_sell(arr,n);
    

    return 0;
}
