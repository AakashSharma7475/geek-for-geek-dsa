#include <bits/stdc++.h>

using namespace std;
void subset_of_string(string str,string curr,int i)
{
    if(i==str.length())
    {
       cout<<curr<<endl;
       return;
    }
    
    
    subset_of_string(str,curr,i+1);
    subset_of_string(str,curr+str[i],i+1);
}
int main()
{
    string str,curr;
    int i=0;
    cin>>str;
    subset_of_string(str,curr,i);
    

    return 0;
}
