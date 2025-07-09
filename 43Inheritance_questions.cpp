#include <iostream>
#include <cmath>
using namespace std;
/*
create 2 classes;
1. simple calculator - takes input of two numbers using a utility function and performs +,-,*,/
and displays the results using another function.
2. scientific calculator - takes input of 2 numbers using a utility function and perform any four
scientific operations of your choice and displays the results using function.

Create another class HyridCalculator and inherit is using these 2 classes:
Q1. What type of Inheritance are you using? ---> Ans: Multiple inheritance
Q2. Which mode of Inheritance are you using? ---> Ans: public simpCalculator, public sciCalculator
Q3. Create an object of HybridCalculator and display results of simple and scientific calculator?
Q4. How is code reusability implemented?
*/

class simpCalculator
{
    int a, b;

public:
    void getDataSimp()
    {
        cout << "Tell the value of a " << endl;
        cin >> a;
        cout << "Tell the value of b " << endl;
        cin >> b;
    }

    void operationsSimp()
    {
        cout << "The value of a + b is: " << a + b << endl;
        cout << "The value of a - b is: " << a - b << endl;
        cout << "The value of a * b is: " << a * b << endl;
        cout << "The value of a / b is: " << a / b << endl;
    }
};

class sciCalculator
{
    int a, b;

public:
    void getDataSci()
    {
        cout << "Tell the value of a " << endl;
        cin >> a;
        cout << "Tell the value of b " << endl;
        cin >> b;
    }

    void operationsSci()
    {
        cout << "The value of tan(a) is: " << tan(a) << endl;
        cout << "The value of sin(a) is: " << sin(a) << endl;
        cout << "The value of acos(a) is: " << acos(a) << endl;
        cout << "The value of log(a) is: " << log(a) << endl;
    }
};

class HybridCalculator : public simpCalculator, public sciCalculator
{
};
int main()
{
    // simpCalculator calculator;
    // sciCalculator calculator;
    // calculator.getData();
    // calculator.operations();
    HybridCalculator calculator;
    calculator.getDataSci();
    calculator.operationsSci();
    calculator.getDataSimp();
    calculator.operationsSimp();

    return 0;
}