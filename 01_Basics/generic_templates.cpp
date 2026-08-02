//generic class n generic function , Generics allow you to write code that works with any data type ,Instead of rewriting the exact same logic for integers, strings, or custom objects, you pass the data type as a parameter 

//templtes are used to convert class or function to genric 


#include<iostream>

using namespace std;
template<class T>
class Rectangle
{
private:
    T length;
    T breadth;

public:
    Rectangle() //default constructor
    {
        length=1;
        breadth=1;
    }
    Rectangle(T length,T breadth)  //paramterized constructor
    {
        this->length=length;
        this->breadth=breadth;
    }
    void getlen(T l)
    {
        length=l;
    }
    T setlen()
    {
        return length;
    }
    void getbredth(int b)
    {
        breadth=b;
    }
    T setbreadth()
    {
        return breadth;
    }

    T area()
    {
        return length*breadth;
    }

    T perimeter();
};

template<class T>
T Rectangle<T>::perimeter()
{
    return 2*(length+breadth);
}

int main()
{
    Rectangle<float> r(10.25,5.44);
    cout<<"area ="<<r.area()<<endl;
    return 0;
}