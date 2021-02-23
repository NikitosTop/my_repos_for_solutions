#ifndef INPUT_H
#define INPUT_H
#define DEBUG

#include <iostream>
#include "structure.h"

using namespace std;

void input_array_function(List_Structure* array)
{

#ifdef DEBUG

	time_t now = time(0);

	// convert now to string form
	char* dt = ctime(&now);

	cout << "The local date and time is: " << dt << endl;

	cout << "FILE:" << __FILE__ << endl;
	cout << "function name: " << __func__ << endl;

#else

	cout << "debug not";

#endif

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter name: ";

		cin >> array[i].name;	

		cout << "Enter crypto: ";

		cin >> array[i].crypto;

		cout << "Enter price: ";

		cin >> array[i].price;

		cout << "Enter volume: ";

		cin >> array[i].volume;

		cin.get();
	}
}

void random_input_function(List_Structure* array)
{

#ifdef DEBUG

	time_t now = time(0);

	// convert now to string form
	char* dt = ctime(&now);

	cout << "The local date and time is: " << dt << endl;

	cout << "FILE:" << __FILE__ << endl;
	cout << "function name: " << __func__ << endl;

#else

	cout << "debug not";

#endif

	srand(time(NULL));

	char array_name[10][15] = { "Bitcoin", "Ethereum", "Tether", "Cardano", "Polkadot", "XRP", "Binance_coin", "Litecoin", "Chainlink", "Stellar" };
	char array_crypto[10][15] = { "BTC", "ETH", "USDT", "ADA", "DOT", "XRP", "BNB", "LTC", "BCH", "LINK" };
	double array_price[10] = { 49213, 1832, 0.99, 0.88, 28, 0.55, 130, 214, 33, 0.5 };
	int array_volume[10] = { 323432421, 123234213, 32152131, 1234213, 35234324, 23454231, 234235423, 234234234, 23425432, 234234234 };

	int random_array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (int i = 0; i < 10; i++) {
		swap(random_array[i], random_array[rand() % 10]);
	}

	for (int i = 0; i < 10; i++)
	{
		strcpy(array[i].name, array_name[random_array[i]]);

		strcpy(array[i].crypto, array_crypto[random_array[i]]);

		array[i].price = array_price[random_array[i]];

		array[i].volume = array_volume[random_array[i]];
	}

}

void sort_function(List_Structure* array)
{
#ifdef DEBUG

	time_t now = time(0);

	// convert now to string form
	char* dt = ctime(&now);

	cout << "The local date and time is: " << dt << endl;

	cout << "FILE:" << __FILE__ << endl;
	cout << "function name: " << __func__ << endl;

#else

	cout << "debug not";

#endif

	int min;

	struct List_Structure temp_var;

	for (int i = 0; i < 10 - 1; i++) {
		min = i;

		for (int j = i + 1; j < 10; j++)
			if (strcmp(array[min].name, array[j].name) > 0)
			{
				min = j;
			}

		if (min > i) {

			temp_var = array[i];

			array[i] = array[min];

			array[min] = temp_var;
		}
	}
}

void print(List_Structure* array)
{
#ifdef DEBUG

	time_t now = time(0);

	// convert now to string form
	char* dt = ctime(&now);

	cout << "The local date and time is: " << dt << endl;

	cout << "FILE:" <<  __FILE__ << endl;
	cout << "function name: " <<  __func__ << endl;

#else

	cout << "debug not";

#endif	

	printf("-------------------------------------------------\n");
	printf("|                world crypto money              |\n");
	printf("|------------------------------------------------|\n");
	printf("|    NAME      |  CRYPTO  |   PRICE  |  VOLUME   |\n");
	printf("|              |          |          |           |\n");
	printf("|--------------|----------|----------|-----------|\n");

	for (int i = 0; i < 10; i++)
		printf("| %12s |   %4s   | %8.2lf | %-9d |\n",
			array[i].name, array[i].crypto, array[i].price, array[i].volume);
	printf("-------------------------------------------------\n");
}


#endif

