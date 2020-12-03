#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	const int n = 9;

	int Arr[n][n] = { {},{} };
	int j = 0, k = 0, i = 1, col = 4, row = 4;
	for (int amount = 1; amount < 6; amount++)
	{
		for (j = 1; j < 8 + k - 6; j++, ++row)
		{
			Arr[row][col] = i;
			i++;
		}
		if (i > 81)
		{
			break;
		}
		else {
			for (j = 1; j < 8 + k - 6; j++, --col)
			{
				Arr[row][col] = i;
				i++;
			}
			k++;
			for (j = 1; j < 8 + k - 6; j++, --row)
			{
				Arr[row][col] = i;
				i++;
			}
			for (j = 1; j < 8 + k - 6; j++, ++col)
			{
				Arr[row][col] = i;
				i++;
			}
			k++;
		}
	}

	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			cout << Arr[row][col] << "\t";
		}
		cout << endl;
	}

}