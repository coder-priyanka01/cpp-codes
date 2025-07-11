#include<iostream>
using namespace std;

int sum (int a, int b){
    int c = a + b;
    return c;
}
//this is not swap a and b
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

//call by reference using pointers
void swapPointer(int* a, int* b){//temp a b
    int temp = *a;
    *a = *b;
    *b = temp;
}

//call by reference using c++ reference variables
//int &
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 4, y = 5;
    //cout<<"The sum of 4 and 5 is "<<sum(4,5);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(x, y); //this will not swap a and b
    //swapPointer(&x, &y);//This will swap a abd b using pointer reference
      swapReferenceVar(x , y);// This will swap a abd b using reference variables
    //swapReferenceVar(x, y) = 766;//This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}