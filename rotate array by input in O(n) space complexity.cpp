using namespace std;
void reverse(int *arr,int low ,int high)
{
    int temp;
    while(low<high)
    {
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        high--;
        low++;
    }
    
}
void Left_rotate_array_by_input(int *arr,int n,int k)
{
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
    
}

int main()
{
    int n,d;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>d;
    Left_rotate_array_by_input(arr,n,d);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
