#include <iostream>
using namespace std;

int add(int val1, int val2){
    return val1+ val2;
}
int main(){
    //1.conditional statements
    //if statement
    int a = 5;
    if (a == 5){
        cout<<"a is 5"<<endl;
    }
    //if-else statements
    int b = 10;
    if (a > b){
        cout<<a<<" is larger than "<<b<<endl;
    }else{
        cout<<b<<" is larger than "<<a<<endl;
    }
    //else-if statements
    int c = 15;
    if(a > b && a> c){
        cout<<a<<" is highest!"<<endl;
    }
    else if(b > a && b> c){
        cout<<b<<" is highest!"<<endl;
    }
    else{
        cout<<c<<" is highest!"<<endl;
    }
    //switch-case statement
    int day = 3;
    switch (day)
    {
    case 1:{
        cout<<"monday";
        break;
    }
    case 2:{
        cout<<"Tuesday";
        break;
    }
    case 3:{
        cout<<"Wednesday";
        break;
    }
    default:
    cout<<"The day is neither monday, tuesday not wednesday"<<endl;
        break;
    }

    //2.Looping Statements
    cout<<"for loop"<<endl;
    for(int i = 1; i < 11; i++){
        cout<<i<<" ";
    }
    cout<<"\n";
    //while loop
    cout<<"while loop"<<endl;
    int i = 1;
    while (i < 11){
        cout<<i<<" ";
        i += 1;
    }
    cout<<"\n";


    //do-while loop
    cout<<"do-while loop"<<endl;
    int j = 1;
    do
    {
        cout<<j<<" ";
        j += 1;
    } while (j < 11);
    cout<<"\n";


    //Jump statements
    //break
    cout<<"break"<<endl;
    int number = 10;
    for(i = 1; i <= 20; i++){
        cout<<i<<" ";
        if (i == 10){
            break;
        }
    }
    cout<<"\n";

    //continue
    cout<<"continue"<<endl;
    int num2 = 20;
    for(i = 1; i <= num2; i++){
        if (i == 10){
            continue;;
        }
        cout<<i<<" ";
    }
    cout<<"\n";

    //return
    int val1 = 10, val2 = 20;
    cout<<"return value: "<<add(val1, val2)<<endl;
    //go to
    int num1 = -3;

    if (num1 < 0){
        goto error;
    }
    else{
        cout<<"positive value"<<endl;
    }
error:
    cout<<num1<<" is non negative value"<<endl;
    
}
