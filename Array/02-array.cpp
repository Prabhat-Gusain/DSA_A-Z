//calculate sum of all the elements in the given array

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,4,3,2,5,6};
    int sum=0;

    for(int i=0;i<6;i++){
        sum+=arr[i];
    }
    cout<<sum;
}