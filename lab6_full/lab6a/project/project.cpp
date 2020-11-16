
#include <iostream>
#include <ctime>
#include <stdio.h>


int main(){

    srand(time(NULL));
    int comp_num = 1 + rand() % 100;

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
            printf("this number is less\n");
            term += 1;
        }

        if (num > comp_num)
        {
            printf("this number is bigger\n");
            term += 1;
        }
    }

    printf("number of attempts: %d", term);
}
