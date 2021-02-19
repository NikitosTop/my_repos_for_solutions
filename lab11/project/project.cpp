#include <iostream>

void recurs_function(int number)
{
    if (number == 0)
        return;
    recurs_function(number / 8);
    std::cout << number % 8;
}
int main()
{
    std::cout << "input number: ";
    int number = 0;
    std::cin >> number;
    recurs_function(number);
}
