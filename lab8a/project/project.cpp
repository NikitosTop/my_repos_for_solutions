#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

int main() 
{
	srand(time(NULL));
	
	const int n = 100;

	int Array[n] = {};

	int size = 10;

	int seat_number = 0;

	while(true)
	{
		int question = 0;
		cout << "Do you smoke?(yes 1)(no 0): " << endl;
		cin >> question;
		if (question == 1)
		{
			int seat_number = 1 + rand() % 5;
			if (Array[seat_number - 1] == 1)
			{
				cout << "this seat has busy" << endl;
				continue;
			}
			else
			{
				Array[seat_number - 1] = 1;
			}
			cout << "You seat is " << seat_number << endl;
			int term = 0;
			for (int j = 0; j < 5; j++)
			{
				if (Array[j] == 1)
				{
					term++;
				}
			}
			if (term == 5)
			{
				cout << "All place have busy" << endl;
				continue;
			}
			
		}
		else
		{
			int seat_number = 6 + rand() % 5;
			if (Array[seat_number - 1] == 1)
			{
				cout << "this seat has busy" << endl;
				continue;
			}
			else 
			{
				Array[seat_number - 1] = 1;
			}
			cout << "You seat is " << seat_number << endl;
			int term = 0;
			

			for (int j = 54; j < 10; j++)
			{
				if (Array[j] == 1)
				{
					term++;
				}
			}
			if (term == 5)
			{
				cout << "All place have busy" << endl;
				continue;
			}
		}
		seat_number++;
		int term = 0;
		for (int j = 0; j < 10; j++)
		{
			if (Array[j] == 1)
			{
				term++;
			}
		}
		if (term == 10)
		{
			cout << "All place have busy" << endl;
			break;
		}
	}

}