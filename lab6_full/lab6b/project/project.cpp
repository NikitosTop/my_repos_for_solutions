
#include <iostream>
#include <ctime>
#include <stdio.h>


int main() 
{

    int number = 1;
    int temp = 0;
    while (number <= 10)
    {
        number++;
        srand(time(0)+ 19);
        int a = 1 + rand() % 9;

        srand(time(0) + 10);
        int b = 1 + rand() % 9;
        int answer = 0;
        int i = 0;
        while (i <= 0)
        {
            i++;
            printf("%d * %d\n", a, b);
            printf("Enter anwser: ");
            scanf_s("%d", &answer);
            if (answer = a * b)
            {
                temp++;
            }
        }
        
    }
    printf("Temp: %d", temp);
}
