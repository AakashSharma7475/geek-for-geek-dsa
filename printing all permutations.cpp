
#include <iostream>

using namespace std;
void pap(string s,int i=0)
{
    if(i==s.length()-1)
    cout<<s<<endl;
    
    for(int j=i;j<s.length();j++)
    {
        swap(s[i],s[j]);
        pap(s,i+1);
        swap(s[i],s[j]);
    }
}

int main()
{
    pap("abc");

    return 0;
}
