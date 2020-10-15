#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long long int day, hour, minutes;
	minutes = 60;
	hour = minutes * 60;
	day = hour * 24;
	long long int this_year = day * 365;
	printf("this year have: %lli second\n", this_year + day);
	long long int century = this_year * 100;
	printf("this century have: %lli second\n", ((century)+(day * 25)));
	printf("this 1000 year have: %lli second\n", ((century * 10) + (day * 250)));
	return 0;

	/*int day, hour, minutes;
	minutes = 60;
	hour = minutes * 60;
	day = hour * 24;
	int this_year = day * 365;
	printf("this year have: %d second\n", this_year + day);
	int century = this_year * 100;
	printf("this century have: %d second\n", ((century)+(day * 25)));
	printf("this 1000 year have: %d second\n", ((century * 10) + (day * 250)));
	return 0;*/
}
