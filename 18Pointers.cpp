#include<iostream>
using namespace std;

int main(){
    //what is a pointer? ----> data type which holds the address of other data types

    int a=3;
    int*b = &a;
    // & ---> (Address of) operators
    cout<<"The adddress of a is "<<&a<<endl;
    cout<<"The adddress of a is "<<b<<endl;

    // * ---> (value at) Dereference opertors
    cout<<"The adddress of b is "<<*b<<endl;

    //Pointer to Pointer
    int** c = &b;
    cout<<"The adddress of b is "<<&b<<endl;
    cout<<"The adddress of b is "<<c<<endl;
    cout<<"The value at adddress c is "<<*c<<endl;
    cout<<"The value at adddress value_at(value_at(c)) is "<<**c<<endl;
    cout<<b;

    return 0;
}