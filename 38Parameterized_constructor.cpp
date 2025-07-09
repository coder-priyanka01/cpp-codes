#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void); // constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)
{ // this is  noa default constructor as it takes no parameters
    a = 10;
    b = 0;
}
int main()
{
    Complex a;
    a.printNumber();

    return 0;
}