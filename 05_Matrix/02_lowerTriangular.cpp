#include<iostream>
using namespace std;

class lowerTriangular
{
private:
    int *A;
    int n;  //dimension 

public:
    lowerTriangular()
    {
        n=2;
        A=new int[2*(2+1)/2];
    }

    lowerTriangular(int n)
    {
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    void Set(int i,int j,int x);
    int Get(int i,int j);
    void Display();

    ~lowerTriangular()
    {
        delete []A;
    }
};

void lowerTriangular::Set(int i,int j,int x)
{
    if(i>=j)
    {
        A[(i*(i-1)/2)+j-1]=x;
    }
}

int lowerTriangular::Get(int i, int j)
{
    if(i >= j)
        return A[(i*(i-1)/2)+j-1];
    else
        return 0;
}

void lowerTriangular::Display()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i >= j)
                cout << A[(i*(i-1)/2)+j-1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    // int n;
    // cout<<"enter dimensions";
    // cin>>n;

    lowerTriangular d(5);
    d.Set(1, 1, 5);
    d.Set(2, 1, 2);
    d.Set(3, 1, 7);
    d.Set(4, 4, 66);
    d.Set(5, 5, 3);
    cout<<d.Get(5,5)<<endl;
    d.Display();

    return 0;
}