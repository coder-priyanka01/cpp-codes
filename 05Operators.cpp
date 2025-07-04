#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "operators in c++:" << endl;
    cout << "Following are the types of operators in c++" << endl;
    // arithmatics operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a ++  is " << a++ << endl;
    cout << "The value of a --  is " << a-- << endl;
    cout << "The value of ++ a  is " << ++a << endl;
    cout << "The value of -- a  is " << --a << endl;
    cout << endl;

    // assignment operators --> used to assign values to variables
    // int a=3, b=9;
    // char d='d';

    // comparison operators
    cout << "Following are the comparison operators in c++" << endl;

    cout << "The value of a== b is " << (a == b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a <=b is " << (a <= b) << endl;
    cout << "The value of a >=b is " << (a >= b) << endl;
    cout << "The value of a !=b is " << (a != b) << endl;

    // logical operators
    cout << "Following are the logical operators in c++" << endl;

    cout << "The value of this logical and operator (a==b && a<b) is:" << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or operator (a==b || a<b) is: " << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not operator (!(a==b)) is: " << (!(a == b)) << endl;

    return 0;
}
