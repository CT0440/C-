//Control Statements
/*Input: n = 11
Output: Odd
Explanation: Since 11 is not completely divisible by 2, it is an odd number.


Input: n = 20
Output: Even
Explanation: Since 20 is completely divisible by 2, it is an even number.*/

#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin >> number;

    if (number % 2 == 0){
        cout << number<<"is even" <<endl;
    }
    else{
       cout << number<<"is odd" <<endl; 
    }
}