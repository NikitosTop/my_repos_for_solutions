#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double day, hour, minutes;
	minutes = 60;
	hour = minutes * 60;
	day = hour * 24;
	double this_year = day * 365;
	printf("this year have: %lf second\n", this_year + day);
	double century = this_year * 100;
	printf("this century have: %lf second\n", ((century)+(day * 25)));
	printf("this 1000 year have: %lf second\n", ((century * 10) + (day * 250)));
	return 0;
}
