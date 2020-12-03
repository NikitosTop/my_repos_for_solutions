#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	const int n = 5;

	int Arr[n][n] = { {},{} };

	for (int row = 0; row < 5; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			Arr[row][col] = 1 + rand() % 9;
		}
	}

	for (int row = 0; row < 5; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cout << Arr[row][col] << " ";
		}
		cout << endl;
	}

	cout << "Enter row(1) or col(0): ";
	int change = 0;
	cin >> change;

	if (change == 1)
	{
		int i = 0;

		for (int row = 0; row < 5; row++)
		{
			int max = Arr[row][0];
			for (int col = 1; col < 5; col++)
			{
				if (Arr[row][col] > max)
				{
					max = Arr[row][col];
				}
			}

			for (int col = 0; col < 5; col++)
			{
				if (Arr[row][col] == max)
				{
					i = Arr[row][0];
					Arr[row][0] = Arr[row][col];
					Arr[row][col] = i;
				}
			}

		}

		cout << endl;

		for (int row = 0; row < 5; row++)
		{
			for (int col = 0; col < 5; col++)
			{
				cout << Arr[row][col] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		int i = 0;

		for (int col = 0; col < 5; col++)
		{
			int max = Arr[0][col];
			for (int row = 1; row < 5; row++)
			{
				if (Arr[row][col] > max)
				{
					max = Arr[row][col];
				}
			}

			for (int row = 0; row < 5; row++)
			{
				if (Arr[row][col] == max)
				{
					i = Arr[0][col];
					Arr[0][col] = Arr[row][col];
					Arr[row][col] = i;
				}
			}

		}

		cout << endl;

		for (int row = 0; row < 5; row++)
		{
			for (int col = 0; col < 5; col++)
			{
				cout << Arr[row][col] << " ";
			}
			cout << endl;
		}
	}
}
