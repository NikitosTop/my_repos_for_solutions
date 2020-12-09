#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int row1, row2, col1, col2;
    long** Arr_1, ** Arr_2, ** Arr_full;
    system("chcp 1251");
    system("cls");
    cout << "Введите количество строк первой матрицы: ";
    cin >> row1;
    cout << "Введите количество столбцов первой матрицы: ";
    cin >> col1;
    cout << "Введите количество строк второй матрицы: ";
    cin >> row2;
    cout << "Введите количество столбцов второй матрицы: ";
    cin >> col2;
    if (col1 != row2)
    {
        cout << "Умножение невозможно!";
        return 0;
    }
    
    Arr_1 = new long* [row1];
    for (int i = 0; i < row1; i++)
    {
        Arr_1[i] = new long[col1];
        for (int j = 0; j < col1; j++)
        {
            Arr_1[i][j] = 1 + rand() % 4;
        }
    }
    
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << Arr_1[i][j] << " ";
        }
        cout << endl;
    }

    Arr_2 = new long* [row2];
    for (int i = 0; i < row2; i++)
    {
        Arr_2[i] = new long[col2];
        for (int j = 0; j < col2; j++)
        {
            Arr_2[i][j] = 1 + rand() % 4;
        }
    }
    
    cout << endl;

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << Arr_2[i][j] << " ";
        }
        cout << endl;
    }

    Arr_full = new long* [row1];
    for (int i = 0; i < row1; i++)
    {
        Arr_full[i] = new long[col2];
        for (int j = 0; j < col2; j++)
        {
            Arr_full[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                Arr_full[i][j] += Arr_1[i][k] * Arr_2[k][j];
            }
        }
    }
    
    cout << "Матрица произведения" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << Arr_full[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}