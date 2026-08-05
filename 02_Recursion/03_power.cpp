#include<iostream>

using namespace std;
//using Recursion
int power1(int m,int n)
{
    if(n==0) return 1;
    else return power1(m,n-1)*m;
}
//using less calculation 
int power2(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
        return power2(m*m,n/2);
    }
    else
    {
        return m*power2(m*m,(n-1)/2);
    }
}
int main()
{
    cout<<power2(2,5);
    return 0;
}