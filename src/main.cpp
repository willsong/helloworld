#include <iostream>
#include "Person.h"

int main()
{
    std::cout << "Hello world!" << std::endl;
    std::cout << "Converted to cmake" << std::endl;

    const std::string tmp("William Song");
    const helloworld::Person me(tmp);
    std::cout << "My name is " << me.getName() << std::endl;
    return 0;
}
