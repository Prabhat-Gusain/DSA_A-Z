#include<iostream>
using namespace std;

class Diagonal
{
private:
    int *A;
    int n;

public:
    Diagonal()
    {
        n=2;
        A=new int[2];
    }

    Diagonal(int n)
    {
        this->n=n;
        A=new int[n];
    }
    void Set(int i,int j,int x);
    int Get(int i,int j);
    void Display();

    ~Diagonal()
    {
        delete []A;
    }
};

void Diagonal::Set(int i,int j,int x)
{
    if(i==j)
    {
        A[i-1]=x;
    }
}

int Diagonal::Get(int i, int j)
{
    if(i == j)
        return A[i-1];
    else
        return 0;
}

void Diagonal::Display()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == j)
                cout << A[i-1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    Diagonal d(5);
    d.Set(1, 1, 5);
    d.Set(2, 2, 2);
    d.Set(3, 3, 7);
    d.Set(4, 4, 66);
    d.Set(5, 5, 3);
    cout<<d.Get(5,5)<<endl;
    d.Display();

    return 0;
}