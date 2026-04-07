//count number of elements in given array greater than a given num x

#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int num=0;
    cout<<"enter number:"<<endl;
    cin>>num;

    int arr[]={23,56,32,67,1,5,90};
    for(int i=0;i<7;i++){
        if(arr[i]>num){
            count++;
        }
    }
    cout<<count;
    return 0;
}