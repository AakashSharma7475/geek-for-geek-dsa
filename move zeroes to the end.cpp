#include <iostream>

using namespace std;
void move_zeroes_to_end(int *arr,int n)
{
    int res=0,temp;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp=arr[res];
            arr[res]=arr[i];
            arr[i]=temp;
            
            res++;
        }
       
    }
}

int main()
{
    int n=5;
    int arr[n]={10,0,4,0,3};
    move_zeroes_to_end(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
