#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n)
{
    bool tag=false;
    int minimum;
    int index,temp;
    for(int i=0;i<n;i++)
    {
        minimum=arr[i];
        for(int j=i;j<n;j++)
        {
            if(arr[j]<minimum){
                tag=true;
                index=j;
                minimum=arr[j];
            }
        }
        if(tag==false)
        continue;
        temp=arr[i];
        arr[i]=minimum;
        arr[index]=temp;
        tag=false;        
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
 cout<<"the elements of this array are =";
 for(int i=0;i<n;i++)
 {
    cout<<arr[i]<<' ';
 }
 cout<<endl;
 selectionsort(arr,n);
 for(int i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 }
return 0;
}
