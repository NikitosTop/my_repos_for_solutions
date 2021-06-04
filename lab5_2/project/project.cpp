#include <iostream>
#include <time.h>
#include "func.h"
using namespace std;

int main()
{
	const int n = 9;
	int Arr_1[n * n] = {};
	int j = 0, k = 0, i = 1, col = 4, row = 4;
	for (int amount = 1; amount < 6; amount++)
	{
		for (j = 1; j < 8 + k - 6; j++, ++row)
		{
			*(Arr_1 + row * n + col + 1) = i;
			i++;
		}
		if (i > 81)
		{
			break;
		}
		else {
			for (j = 1; j < 8 + k - 6; j++, --col)
			{
				*(Arr_1 + row * n + col + 1) = i;
				i++;
			}
			k++;
			for (j = 1; j < 8 + k - 6; j++, --row)
			{
				*(Arr_1 + row * n + col + 1) = i;
				i++;
			}
			for (j = 1; j < 8 + k - 6; j++, ++col)
			{
				*(Arr_1 + row * n + col + 1) = i;
				i++;
			}
			k++;
		}
	}

	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			cout << *(Arr_1 + row * n + col + 1) << "\t";
		}
		cout << endl;
	}
}