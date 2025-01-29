#include <iostream>
using namespace std;

int main(){
    //implicit conversion
    cout<<"Implicit conversion:"<<endl;
    int a;
    a = 0;
    //automatical conversion
    char ch = 'a';
    //conversion of character to integer
    a = 0 + ch;
    cout<<a<<endl;
    //conversion of integer to character
    int num = 65;
    char ch1 = num;
    cout<<ch1<<endl;

    //convert the previous ch1 to short
    short shortnum = ch1;
    cout<<"sn"<<shortnum<<endl;

    //conversion of short to int
    num = shortnum;
    cout<<"intnum"<<num<<endl;

    cout<<"Explicit conversion"<<endl;

    char alphabet = 'z';
    int alphabet_num = (int)alphabet;
    cout<<alphabet_num<<endl;

    short shortnumalpha = static_cast<int>(alphabet);
    cout<<"shortnumalpha:"<<shortnumalpha<<endl;

    float pi = 3.14;
    short pinum = static_cast<int>(pi);
    cout<<"pinum: "<<pinum;

    cout<<"1.Numeric promotion"<<endl;
    char char1 = 'B';
    int number = 100;
    int result = char1 + number;//char < int ->int
    cout<<"char1 + number: "<<result<<endl;

    cout<<"2.Boolean conversion"<<endl;
    int x = 5;
    while (x)
    {
        cout<<"prints 5"<<endl;
        break;
    }
    cout<<"3.Pointer conversion(Upcasting)"<<endl;
    
 
   return 0; 
}