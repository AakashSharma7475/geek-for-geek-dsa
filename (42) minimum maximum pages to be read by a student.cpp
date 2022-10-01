#include <bits/stdc++.h>
using namespace std;
/*The main idea behind this code is that one student have to read consiqutive books 
and the books are distributed optimally , at any case if we have the only 1 student 
then the answer is the sum of all books and at a time if we have only 1 book then the 
answer is that book , so take the average of maximum pages in a book and total number 
of pages in all books for ex{20,20,20,20,20} and we have 4 student then the max in the
array is 20 and total is 100 so average is 100+20/2=60 now we check how many student need
if the 60 is limit, in this case only two student is sufficiant that mean we take the limit
higher so reduce the right half=20+(60-1)/2=39 in this case we need five students so cut the 
left half 21+59/2=40 if we check this case the student need is 3 which is less so we try to cut
the right half and the condition became false and the minimum maximum pages are 40*/
bool feasible(int arr[],int n,int k,int ans)
{
    int req=1,sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]>ans)
        {
            req++;
            sum=arr[i];
        }
        else
        {
            sum+=arr[i];
        }
    }
    return (req<=k);
}
int final(int arr[],int n,int k)
{
    int sum=0;int mx=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        mx=max(mx,arr[i]);
    }
    int low=mx,high=sum,res=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(feasible(arr,n,k,mid))
        {
            res=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
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
    int k;
    cin>>k;
    cout<<final(arr,n,k);

    return 0;
}
