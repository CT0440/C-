#include <iostream>
#include<limits>
using namespace std;

int main(){
    /*Integer premitive datatypes
    int, short,long, long long, unsigned
    */
    int i = 100;
    short s = 10;
    long l = 100000;
    long long ll = 1000000000;
    unsigned us = 250;
    
    cout << "Integer value: " << i
    << " Size: " << sizeof(i) << " bytes" 
    <<" range:"<<numeric_limits<int>::min()<<","<<numeric_limits<int>::max()<< endl;
    
    cout << "Short value: " << s << " Size: " << sizeof(s) << " bytes" 
    <<" range:"<<numeric_limits<short>::min()<<","<<numeric_limits<short>::max()<< endl;

    cout << "Long value: " << l << " Size: " << sizeof(l) << " bytes" 
    <<" range:"<<numeric_limits<long>::min()<<","<<numeric_limits<long>::max()<< endl;

    cout << "Long long value: " << ll << " Size: " << sizeof(ll) << " bytes" 
    <<" range:"<<numeric_limits<long long>::min()<<","<<numeric_limits<long long>::max()<< endl;

    cout << "Unsigned value: " << us << " Size: " << sizeof(us) << " bytes" 
    <<" range:"<<numeric_limits<unsigned>::min()<<","<<numeric_limits<unsigned>::max()<< endl;

    //floating-point datatypes
    float f = 3.14f;
    cout << "Float value: " << f 
         << " | Size: " << sizeof(f) << " bytes"
         << " | Range: " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() 
         << endl;

    double d = 3.14159;
    cout << "Double value: " << d 
         << " | Size: " << sizeof(d) << " bytes"
         << " | Range: " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() 
         << endl;

    long double ld = 3.1415926535;
    cout << "Long double value: " << ld 
         << " | Size: " << sizeof(ld) << " bytes"
         << " | Range: " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() 
         << endl;

     // Character types
    char c = 'A';
    cout << "Char value: " << c 
         << " | Size: " << sizeof(c) << " bytes"
         << " | Range: " << numeric_limits<char>::min() << " to " << numeric_limits<char>::max() 
         << endl;

    wchar_t wc = L'α'; // Wide character (Unicode character)
    cout << "Wide Char value: " << wc 
         << " | Size: " << sizeof(wc) << " bytes"
         << " | Range: " << numeric_limits<wchar_t>::min() << " to " << numeric_limits<wchar_t>::max() 
         << endl;
    
    // Boolean type
    bool b = true;
    cout << "Bool value: " << b 
         << " | Size: " << sizeof(b) << " bytes"
         << " | Range: " << numeric_limits<bool>::min() << " to " << numeric_limits<bool>::max() 
         << endl;

}