#include <bits/stdc++.h>

using namespace std;
    void subsets(string s)
    {
        int len=s.length();
        int counter=pow(2,len);
        
        for(int i=0;i<counter;i++)
        {
            for(int j=0;j<len;j++)
            {
                if((i&(1<<j))!=0)
                cout<<s[j];
            }
            cout<<endl;
        }
    }

int main()
{
    subsets("abc");
    return 0;
}
