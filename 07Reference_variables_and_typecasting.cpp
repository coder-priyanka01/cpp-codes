#include<iostream>

using namespace std;
int main(){
//--reference variable--
//float x = 455;
//float & y = x;
//cout<<x<<endl;
//cout<<y;

//--type casting--
int a = 45;
float b = 45.46;
cout<<"The value of a is "<<(float)a<<endl;
cout<<"The value of a is "<<float(a)<<endl;

cout<<"The value of b is "<<(float)b<<endl;
cout<<"The value of b is "<<float(b)<<endl;
int c = int(b);

cout<<"The expression is "<<a + b<<endl;
cout<<"The expression is "<<a + int(b)<<endl;
cout<<"The expression is "<<a + (int)b;

return 0;
}