#include<iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() //default constructor
    {
        length=1;
        breadth=1;
    }
    Rectangle(int l,int b)  //paramterized constructor
    {
        length=l;
        breadth=b;
    }
    void getlen(int l)
    {
        length=l;
    }
    int setlen()
    {
        return length;
    }
    void getbredth(int b)
    {
        breadth=b;
    }
    int setbreadth()
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }


};

int main()
{
    Rectangle r(10,5);
    int areaOfRectangle=r.area();
    cout<<"area ="<<areaOfRectangle<<endl;
    return 0;
}