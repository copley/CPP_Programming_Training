#include <iostream>
#include <string>

//using namespace std::string_literals;

int main(void)
{
    using namespace std::string_literals;

    auto output = "Hello World!";
    std::cout << output << std::endl;

    return 0;
}
