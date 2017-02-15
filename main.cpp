#include <iostream>
#include <sstream>

int main() {
    std::string line;
    int a;
    int b;
    while (std::getline(std::cin, line)){
        std::istringstream iss(line);
        iss>>a;
        iss>>b;
        std::cout<<a+b<<std::endl;
    }
    return 0;
}