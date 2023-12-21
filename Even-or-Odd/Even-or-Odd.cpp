/*Link to the exercise : https://www.codewars.com/kata/53da3dbb4a5168369a0000fe/train/cpp */

#include <iostream>
#include <string>

std::string even_or_odd(int number)
{
    if (number % 2 == 0) {
        return "Even";
    }
    else {
        return "Odd";
    }
}

int main()
{
    std::cout << even_or_odd(10);
}
