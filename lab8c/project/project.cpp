#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int number; // число которое мы вводим 
    int number_2; // копия числа 1
    int term = 0; // количество цифр в числе 
    int sum = 0; // сумма чисел числа 
    int number_3 = 0; // перевернутое число

    cout << "\nEnter number: ";
    cin >> number;


    number_2 = number;

    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
        term++;
    }

    size_t c; // инициализация переменной для колличества элементов массива 

    c = term;

    int* arr = new int[c]; // выделяем память 

    for (int i = 0; i < c; i++) // заполнение массива 
    {
        arr[i] = number_2 % 10;
        number_2 /= 10;
    }

    int len = c - 1;

    for (int i = 0; i < c; i++) // обьеденение элементов массива в переменную
    {
        number_3 += pow(10, len) * arr[i];
        len--;
        
    }

    printf(" number: %d", number_3);
    printf(" sum: %d", sum);
    printf(" term: %d", term);

    delete[] arr; // очищаем массив

    return main();
}