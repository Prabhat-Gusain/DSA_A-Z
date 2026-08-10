#include<iostream>

using namespace std;

class Array
{
private:
    int *A; 
    int size;
    int length;
public:
    Array()
    {
        size=10;
        length=0;
        A=new int[size];
    }
    Array(int sz)
    {
        size=sz;
        length=0;
        A=new int[size];
    }
    ~Array()
    {
        delete []A;
    }
    void Display();
    void Append();
    void Insert(int index,int x);
    void swap();
    int LinearSearch();
    int BinarySearch();
    int RBinSearch();
    int Get();
    void Set();
    int Max();
    int Min();
    int Sum();
    float Avg();
    void Reverse();
    void Reverse2();
};

void Array::Display()
{
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<endl;
    }
}

void Array::Insert(int index,int x)
{
    if(index>=0 && index<=length)
    {
        for(int i=length-1;i>=index;i--)
        {
            A[i+1]=A[i];
        }
        A[index]=x;
        length++;
    }
}

int main()
{
    Array arr(10);

    arr.Insert(0,5);
    arr.Insert(1,6);
    arr.Display();
    return 0;
}