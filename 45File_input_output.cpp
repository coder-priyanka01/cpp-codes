#include<iostream>
#include<fstream>

/*the useful classes for working with files in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

/*
In order work with files in c++, you will have to open it. Primarily,
there are 2 ways to open a file:
1. using the constructor
2. using the member function open() of the class
*/
using namespace std;

int main(){
    string st = "Priyanka";
    //opening files using constructor and writing it
    //ofstream out("sample45.txt");//write operation
    //out<<st;

    //opening files using constructor and reading it
    string st2;
    ifstream in("sample45b.txt");//read operation
    //in>>st2;
    getline(in, st2);
    cout<<st2;
    return 0;
}