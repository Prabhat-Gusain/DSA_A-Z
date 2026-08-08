#include<iostream>

using namespace std;

//recursion
int e(int x,int n)
{
    static int p=1,f=1;
    int r;

    if(n==0) return 0;

    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+(p/f);
    }
}

//using for loop
int e2(int x,int n)
{
    int s=1;

    for(;n>0;n--)
    {
        s=1+x*s/n;
    }
    return s;
}

int main()
{
    cout<<e2(3,4);
    return 0;
}