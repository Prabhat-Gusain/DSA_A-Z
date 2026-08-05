#include<iostream>

using namespace std;
//using Recursion
int fact(int n)
{
    if(n==0) return 1;
    else return fact(n-1)*n;
}
//using loop
int fact2(int n)
{
    int s=1;
    for(int i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;
}
int main()
{
    cout<<fact2(5);
    return 0;
}