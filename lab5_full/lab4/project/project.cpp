#define _CTR_SECURE_NO_WARNINGS
#include <iostream>

#include <stdio.h>

int main()
{
    double x, y;
    /*std::cout << "Enter x: " << std::endl;*/
    printf("Enter x: ");
    /*std::cin >> x;*/
    scanf_s("%lf", &x);

    /*std::cout << "Enter y: " << std::endl;*/
    printf("Enter y: ");
    /*std::cin >> y;*/
    scanf_s("%lf", &y);
    printf("x = %2.2lf y = %2.2lf\n", x, y);

    if ((x*x + y*y <= 1) && (x <= 0 && y <= 0) || (x <= 1 && x >= 0 && y >= 0 && y <= 1))
    {
       /* std::cout << "this is correct" << std::endl;*/
        printf("this is correct , point in range\n");
    }
    else
    {
        /*std::cout << "not in range" << std::endl;*/
        printf("not in range\n");
    }

    return main();
}

