#include <stdio.h>
#include <iostream>

int main(void) {

    setlocale(LC_ALL, "Russian");
    int number = 0;
    std::cout << "запаковать (0) или распаковать(1): ";
    std::cin >> number;
    if (number == 0)
    {
        char c; 
        char f; 
        int b; 
        unsigned char n; 
        unsigned int UnitStateWord; 
         /* ввод составных частей */
        printf("Введите номер канала таймера (0 - 3) >");
        scanf_s("%d", &c);
        printf("Введите форму сигнала (0 - 3) >");
        scanf_s("%d", &f);
        printf("Введите коэффициент деления опорной частоты: 0-4095 >");
        scanf_s("%d", &b);
        /* формирование упакованного кода */
        UnitStateWord = ((unsigned int)c & 0x03) << 14;
        UnitStateWord |= ((unsigned int)f & 0x03) << 12;
        UnitStateWord |= ((unsigned long int)b & 0xFFF) << 0;
        /* вывод результата */
        printf("\nУправляющее слово программируемого таймера = %04x\n",
            UnitStateWord);
    }
    else
    {
        char c; 
        char f; 
        int b; 
        unsigned char n; 
        unsigned long int UnitStateWord;
         /* yправляющее слово программируемого таймера */
        printf("Введите yправляющее слово программируемого таймера \n");
        printf("(16-ричное число от 0 до 0xFFFF) >");
        scanf_s("%x", &UnitStateWord);
        /* Выделение составных частей */
        c = (UnitStateWord >> 14) & 0x03;
        f = (UnitStateWord >> 12) & 0x03;
        b = (UnitStateWord >> 0) & 0xFFF;
        /* вывод результатов */
        putchar('\n');
        printf("номер канала таймера = %d\n", c);
        printf("форма сигнала = %d\n", f);
        printf("коэффициент деления опорной частоты = %d\n", b);

    }
    return 0;
}