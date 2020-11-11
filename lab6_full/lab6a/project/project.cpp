
#include <iostream>
#include <ctime>
#include <stdio.h>

int main(){


    srand(static_cast<unsigned int>(time(0)));
    int random = 0;
    for (int j = 0; j < 10; j++)
    {
        random = rand();
    }

    int comp_num = random;

    int term = 0;
    for (int i = 0; i < i+1; i++)
    {
        printf("Enter number: ");
        int num;
        scanf_s("%d", &num);

        if (comp_num == num)
        {
            printf("this number is true\n");
            break;
        }

        if (num < comp_num)
        {
            printf("this number is low\n");
            term += 1;
        }

        if (num > comp_num)
        {
            printf("this number is biggest\n");
            term += 1;
        }
    }

    printf("number of attempts: %d", term);
}
