#include<iostream>
using namespace std;

//int product(int a, int b){
//    return a*b;
//}

int product(int a, int b){
    // not recommmended to use below lines with inline fuctions
    // static int c = 0;//this executes only once
    // c = c+1;//next time this function is run, the value of c will be retained
    //return a*b+c;
    return a*b;
}

float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}
int main(){
    //int a, b;
    //cout<<"Enter the value of a and b "<<endl;
    //cin>>a>>b;
    int money = 10000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<<" Rs after 1 year";
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<<" Rs after 1 year";
    //cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;


    return 0;
}