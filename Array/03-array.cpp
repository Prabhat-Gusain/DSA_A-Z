//find max value out of all the elements in the array

#include<iostream>
using namespace std;
int main()
{
    int arr[]={9,100,1,2,102,4,5,6};
    int maxElement=arr[0];
    for(int i=0;i<7;i++){
        if(arr[i]>maxElement){
            maxElement=arr[i];
        }
    }
    cout<<maxElement;
    return 0;
}