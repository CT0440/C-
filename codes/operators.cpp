#include <iostream>
using namespace std;

int main() {
    // 1. Arithmetic Operators
    short a = 10, b = 5;
    cout<<"Arithematic operators<<a = 10, b = 5"<<endl;
    cout<<"a + b = "<< a + b<<endl;
    cout<<"a - b = "<< a - b<<endl;
    cout<<"a * b = "<< a * b<<endl;
     if (b != 0) {
        cout << "a / b = " << a / b << endl;
        cout << "a % b = " << a % b << endl;
    } else {
        cout << "Cannot divide or take modulo by zero." << endl;
    }
    cout<<"++a= "<< ++a<<endl;
    cout<<"--b = "<< --b<<endl;

    //2. Relational Operators
    int c = 25, d = 10;
    cout<<"Relational operators: c = 25, d = 5"<<endl;
    cout<<"c == d: " << (c==d) << endl;
    cout<<"c != d: " << (c!=d) << endl;
    cout<<"c <= d: " << (c<=d) << endl;
    cout<<"c >= d: " << (c>=d) << endl;
    cout<<"c < d: " << (c<d) << endl;
    cout<<"c > d: " << (c>d) << endl;

    //3.Logical Operators
    bool opd1 = true, opd2 = false;
    cout<<"Logical operators opd1 = true, opd2 = false"<<endl;
    cout<<"opd1 && opd2 = "<<(opd1 && opd2)<<endl;
    cout<<"opd1 || opd2 = "<<(opd1 || opd2)<<endl;
    cout<<"!opd1 = "<<(!opd1)<<endl;
   

    //4. Bitwise Operators
    int num1 = 5, num2 = 3;
    cout<<"Bitwise operators num1 - 5, num2 - 3"<<endl;
    cout<<"num1 & num2 = "<<(num1 & num2)<<endl;
    cout<<"num1 | num2 = "<<(num1 | num2)<<endl;
    cout<<"num1 ^ num2 = "<<(num1 ^ num2)<<endl;
    cout<<"~num1 = "<<(~num1)<<endl;
    cout<<"num1<<1 = "<<(num1<<1)<<endl;
    cout<<"num1>>1 = "<<(num1>>1)<<endl;
    
    //5.Assignment Operators
    int val1 = 10, val2;
    cout<<"Assignment operators: val1 = 10"<<endl;
    val2 = val1;
    cout<<" val2 =  "<<val2<<endl;
    val2 += val1;
    cout<<" val2 =  "<<val2<<endl;
    //6.Ternary operators
    int age = 19;
    age >= 18 ? cout << "major" : cout << "minor";
    
    //7.Misllenous Operators ',','::','->',new,delete,'.',sizeof(), typeid()e.t.c

    return 0;
}
