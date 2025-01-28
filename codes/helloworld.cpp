/*inputOutputStream<iostream> which contains
standard input and standard output.
#include is a preprocessor directive which tells the compiler to get specifice file
like #include<iostream>*/
#include <iostream> 

int main(){
    /*cout is used for writes the data to the standared output stream
    then the streams will display on the console.*/

    //<<(insetion operator)-sends data to output stream
    std::cout<<"hello world";
    std::cout<<"n : ";
    int n;

    /*cin - read data in standard input stream
    >>(Extraction operator)-extracts data from input stream
    ::(scope resolution operator) is used for it tells the compiler to look inside the std namespace*/
    std::cin>>n;
    std::cout<<n + n;
}

/* here this helloworld.cpp file is highlevel programming language(human readable)
that takes by the compiler(g++) and translates the highlevel to assembly level
language that understanded by machine and assembler takes the assembly language file
and converts to lowlevl language.(machine code) and finally that file called as
object code.
linker takes the object file to produce executable code.
executable code contains all the machine code instructions required to run the
program i.e script.
whenever user executes .exe file then it handed to cpu that displays the 
the output on the target system.
*/