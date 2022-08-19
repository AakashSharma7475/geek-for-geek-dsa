#include <iostream>

using namespace std;
void TOH(char a,char b,char c,int n)
{
    if(n==1)
    {
        cout<<"move disk 1 from "<<a<<" to "<<c<<endl;
        return;
    }
    TOH(a,c,b,n-1);
    cout<<"move disk "<<n <<" from "<<a<<" to "<<c<<endl;
    TOH(b,a,c,n-1);
}

int main()
{
    char a='a',b='b',c='c';
    int n=3;
    TOH(a,b,c,n);

    return 0;
}
