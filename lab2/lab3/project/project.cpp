
#include <iostream>
#include <math.h>
#include <stdio.h>

int main()
{
    // параметры которые вводятся cc
    double x = 1.2;
    // параметры которые задаются в программе
    double a = 7.3, b = 8.6;
    printf("Enter x: ");
    scanf_s("%lf", &x);
    double c = 1 / (2 * pow(a, 3)); // вычисляем промежуточное значение 1 
    double d = (1.0 / 3.0) * c; //  вычисляем промежуточное значение 2
    double log1 = log((a + x) / (a - x)); // вычисляем логарифм 
    double t1, t2; // результаты 
    double ab = a*b, ax = a*x;

    if (a - x != 0 && ((a + x) / (a - x)) > 0) // проверяем на ошибку ( на ноль не делим и тело логарифма должно быть больше нуля )
    {
        t1 = d * log1 + c;
        printf("t1 = %lf\n", t1);
    }
    else
    {
        printf("warning\n");
    }

    if (ab != 0 &&                                                      // проверяем на ошибку ( на ноль не делим и тело логарифма должно быть больше нуля )
        tan((ax - b) * 3.14 / 180) != 0 && 
        (tan((ax + b) * 3.14 / 180) / tan((ax - b) * 3.14 / 180)) > 0)
    {
        t2 = 1 / ab * log((tan((ax + b) * 3.14 / 180) / tan((ax - b) * 3.14 / 180)));
        printf("t2 = %lf\n", t2);
    }
    else
    {
        printf("warning\n");
    }

    return main();
}
