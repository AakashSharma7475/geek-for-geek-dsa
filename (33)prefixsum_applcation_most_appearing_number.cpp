#include<bits/stdc++.h>
using namespace std;

int max_position(int l[],int r[],int n)
{


	int arr[1000];
	memset(arr,0,sizeof(arr));

	for(int i=0;i<n;i++)
	{
        arr[l[i]]++;
		arr[r[i]+1]--;
	}

	int maxm = arr[0], res = 0;
	for(int i = 1; i < 1000; i++)
    	{
    		arr[i] += arr[i - 1];

    		if(maxm < arr[i])
    		{
    			maxm = arr[i];

    			res = i;
    		}
    	}

	return res;
}
int main()
{
	int l[]={1,2,5,15};
	int r[]={5,8,7,18};
	int n=sizeof(l)/sizeof(int);
	cout<<max_position(l,r,n);
    
	return 0;
}
