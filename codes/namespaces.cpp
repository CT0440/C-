// in c++ namespace is defined by namespace keyword

//without namespaces
/*#include <iostream>
void printvalue(){
    int value1 = 10;
    std::cout<<value1<<std::endl;
}
void printvalue(){
    int value2 = 20;
    std::cout<<value2<<std::endl;
}
int main(){
    printvalue();
    return 0;
}*/
//with namespaces
#include <iostream>
namespace MyNameSpace1{
    int value = 10;

    void printvalue(){
        std::cout<<"the value in NameSpace1: "<<value<<std::endl;
    }
}
namespace MyNameSpace2{
    float value = 20.0;

    void printvalue(){
        std::cout<<"the value in NameSpace2: "<<value<<std::endl;
    }
}


int main(){
    MyNameSpace1::printvalue();//accessing the function inside the namespace1
    MyNameSpace2::printvalue();////accessing the function inside the namespace2

    return 0;
}