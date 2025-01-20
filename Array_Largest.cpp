/*4. Arrays
Concept: Collection of elements of the same type. Scenario: Find the largest number in an array.

Input: An array of integers.
Output: The largest integer in the array.*/

#include <iostream>
using namespace std;

int main(){
    int n, temp;

    cout << "Enter array size: ";
    cin >> n;

    int arraynum[n];
    cout << "Enter " <<n<< " Elements: ";
    for (int i = 0; i < n; i++){
        cin >> arraynum[i];
    }

    int largest = arraynum[0];
    for (int i = 1; i < n; i++){
        if (arraynum[i] > largest){
            largest = arraynum[i];
        }
    }
    cout <<"The largest number in an array is: " << arraynum[n - 1] << endl;
}