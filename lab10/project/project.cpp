#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;


int double_arr(int row, int col, int Arr[])
{
	int size = row * col;

	int Arr_2[100][100] = { {} };

	int temp = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Arr_2[i][j] = Arr[temp];
			temp++;
		}
	}

	cout << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << Arr_2[i][j] << " ";
		}
		cout << endl;
	}

	int Arr_min[100] = {};

	for (int i = 0; i < row; i++)
	{
		int min = Arr_2[i][0];
		for (int j = 0; j < col; j++)
		{
			if (Arr_2[i][j] < min)
			{
				min = Arr_2[i][j];
			}
		}
		Arr_min[i] = min;
	}

	cout << endl;

	for (int i = 0; i < row; i++)
	{
		cout << Arr_min[i] << " ";
	}

	int sum = 0;

	for (int i = 0; i < row; i++)
	{
		sum += Arr_min[i];
	}

	sum = sum / row;

	//cout << "average: ";

	return sum;

}

int main()
{
	srand(time(NULL));

	int row, col;
	cout << "Enter row: ";
	cin >> row;
	cout << "Enter col: ";
	cin >> col;

	int size = row * col;

	int Arr[100] = {};

	/*int Arr_2[100][100] = { {} };*/

	for (int i = 0; i < size; i++)
	{
		Arr[i] = 1 + rand() % 4;
	}

	for (int i = 0; i < size; i++)
	{
		cout << Arr[i] << " ";
	}

	cout << endl;

	cout << "average:" << double_arr(row, col, Arr);

	for (int i = 0; i < size; i++)
	{
		cout << Arr[i] << " ";
	}
}