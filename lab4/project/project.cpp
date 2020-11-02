
#include <iostream>

int main()
{
    double x, y;
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter y: " << std::endl;
    std::cin >> y;

    if ((x*x + y*y <= 1) && (x <= 0 && y <= 0) || (x <= 1 && x >= 0 && y >= 0 && y <= 1))
    {
        std::cout << "this is correct" << std::endl;
    }

    return main();
}

