#include<iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
    int glo=9;
    glo = 45;
    //int a = 4;
    //int b = 5;
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'd';
    bool is_true = false;// false gives 0 and true gives 1.
    sum();
    cout<<glo<< is_true;
    //cout<<"This is tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is "<<b;
    //cout<<"\nThe value of pi is : "<<pi;
    //cout<<"\nThe value of c is : "<<c;

    return 0;
}