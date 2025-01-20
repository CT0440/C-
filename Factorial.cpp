/* This is Documentation Section.
In This Factorial of the program is implemented by the recursion concept.
Author: susruthi kanaparthi
Date:-20-01-2025
*/

//Linking section
#include <iostream>
using  namespace std;

//definition section
typedef int INTEGER;

//GlobalDeclaration
INTEGER fact = 1;

//function definition
INTEGER Factorial(int num){
    if (num <= 0){
        return 1;
    }
    else{
        return num * Factorial(num - 1);
    }
}

//main function
INTEGER main(){
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    if (number < 1){
        cout << "Print a valid positive number.";
    }
    else{
       INTEGER result = Factorial(number);
       cout << "factorial of "<< number << " is: " <<result << endl;
    }
}