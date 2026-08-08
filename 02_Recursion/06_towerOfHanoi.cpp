#include<iostream>

using namespace std;
//using Recursion
void toh(int n,int a,int b,int c) // n=no of disk ,a=tower a ,b=tower b,c=tower c
{
    if(n>0)
    {
        toh(n-1,a,c,b);
        cout<<a<<"to"<<c <<endl;
        toh(n-1,b,a,c);
    }
}

int main()
{
    toh(3,1,2,3);
    return 0;
}