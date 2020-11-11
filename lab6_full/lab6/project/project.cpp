#include <iostream>
#include <stdio.h>
#include <math.h>

int main(void) 
{
    long n;
    double a;
    double sum = 0;
    const double exp = 0.0001;
    for (n = 0; n < n + 1; n++)
    {
        a = 2 * (n + 1);
        if (a != 0) {
            a = 1 / a;
            a = pow(-1, n) * a;
            if (fabs(a) >= exp)
            {
                sum += a;
            }
            else break;

            if (n == 9) {
                printf("sum if n == 9: %lf\n", sum);
            }

        }
    }
        
    printf("sum all numbers: %lf", sum);

}