#include <iostream>
using namespace std;


class Calculate {
    public:
        int num1 = 10; 
        int num2 = 20;   
        
        int addition() {
            int result = num1 + num2; 
            return result; 
        }
};

int main() {
    Calculate add; 
    int sum = add.addition(); 
    cout << "The sum is: " << sum << endl; 
    
    return 0; 
}
