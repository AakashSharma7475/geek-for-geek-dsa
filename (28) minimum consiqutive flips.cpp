#include <iostream>

using namespace std;

void minimum_consiqutive_flips(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            cout<<"from "<<i<<" to ";
            else
            cout<<(i-1)<<endl;
        }
    }
    if(n-1!=arr[0])
    cout<<n-1<<endl;
    
    
}
    



int main()
{
    int arr[] = {1,0,0,0,1,1,0,0,0,1};

    minimum_consiqutive_flips(arr,10);
    return 0;
}

