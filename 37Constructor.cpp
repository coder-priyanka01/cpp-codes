#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    //creating a constructor
    //constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created

    Complex(void);//constructor declaration
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex :: Complex(void){ // this is  noa default constructor as it takes
    a = 10;
    b = 0;
}
int main(){
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}