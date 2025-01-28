#include <iostream>
using namespace std;

int gloabal_variable = 100;//global variable
const float pi(3.14);//const varaible

void function1(){
    int local_variable = 101;
    cout<<"local variable :"<<local_variable<<endl;
    cout<<"Global variable in function1:"<<gloabal_variable<<endl;

}
int main(){
    int var;//variable definition
    cout<<var<<endl;//garbage value
    var = 10;//Variable Initialization
    int var2 = 20;//defining and initiallizing
    cout<<var<<endl;
    cout<<var2<<endl;

    //creating multiple variables once
    float val1 = 10.2, val2 = 10.3, val3 = 10;
    cout<<val3<<endl;
   

    // Variable initializations
    int a(10);    // Direct initialization
    int b{20};    // Uniform initialization (C++11 and onwards)
    int c = 30;   // Copy initialization (traditional style)

    cout << "Variable initialization types: " << a << " " << b << " " << c << endl;

    //local variable & Global variable
    function1();
    // cout<<"local variable :"<<local_variable<<endl;
    cout<<"Global variable :"<<gloabal_variable<<endl;
    //pi = 4.14// you can't modify
    cout<<"const value :"<<pi + 1<<endl; // you can maipulate
    return 0;
}

