
#include <iostream>
using namespace std;
#include "class.h"
#include <conio.h>
int main()
{
	int option;
	SUM a(1, 1), * p;
	p = &a;
	int b; int c;

	cout << "Input numbers: ";
	cin >> b >> c;
	a.set(b, c);
	a.addition();
	a.show();
	_getch();

	cout << endl;

	p->set(1, 1);
	p->addition();
	p->show();
	_getch();
}