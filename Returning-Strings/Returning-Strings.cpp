//Link to exercise: https://www.codewars.com/kata/55a70521798b14d4750000a4/cpp

#include <iostream>
#include <string>

std::string greet(const std::string& n) {
    return "Hello, " + n + " how are you doing today?";
}

int main()
{
     std::cout << greet("HX73D");
}
