//second largest element in an array

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={1,2,5,18,9,4,6};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<7;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<smax<<endl;
}