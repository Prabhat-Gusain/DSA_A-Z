#include<iostream>

using namespace std;
//using Recursion
int sum(int n)
{
    if(n==0) return 0;
    else return sum(n-1)+n;
}
//using loop
int sum2(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    return s;
}
int main()
{
    cout<<sum2(5);
    return 0;
}