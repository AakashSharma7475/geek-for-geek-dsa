#include<iostream>
using namespace std;
bool two_pointers_approach(int arr[],int n,int x)
{
	/*the main thing is that the array is sorted 
	so the idea behind this is we take two variables
    ie. i=0 to j=n-1 and if the array[j]+arr[i]==x
    then simply return otherwise if it is more than 
    x then reduce j by 1, and if it is less than x then 
    increase i by one , the code runs till i<j bcoz if i
	=j then there is no pair and rest all we check so return
	false that time*/
    
    int i=0;
    int j=n-1;
    while(i<j)
    {
    	if((arr[i]+arr[j])==x)
    	return true;
    	else if((arr[i]+arr[j])<x)
    	i=i+1;
    	else 
    	j=j-1;	
	}
	return false;
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
	int x;
	cin>>x;
	cout<<two_pointers_approach(arr,n,x);
	
	return 0;
}
