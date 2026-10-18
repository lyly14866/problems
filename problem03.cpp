#include <iostream>
#include <string>

int main()
{
    std::string unique_name;

    std::cout << "What is your name? ";
    std::getline(std::cin, unique_name);

    std::cout << "Hello, " << unique_name << "!\n";

    return 0;
}
