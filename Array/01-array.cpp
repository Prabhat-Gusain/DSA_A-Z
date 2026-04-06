//print values less than 35 in an array

#include<iostream>
using namespace std;

int main()
{
    int arr[]={90,30,32,85,34,97};
    for(int i=0;i<6;i++){
        if(arr[i]<35){
            cout<<i<<" ";
        }
    }
}