#include<iostream>
using namespace std;

//struct employee
//{
    //int eId;
    //char favChar;
    //float salary;
//};

//by using typedef for this function
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;

union money{ //union mai ik time pe ik hi command chalega
    int rice;
    char car;
    float pounds;
};


int main(){
    //struct employee harry;
    ep harry;
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car;
    
    //harry.eId = 1;
    //harry.favChar = 'c';
    ////harry.salary = 120000;
    //cout<<"The value is "<<harry.eId<<endl;
    //cout<<"The value is "<<harry.favChar<<endl;
    //cout<<"The value is "<<harry.salary<<endl;
    return 0;
}