#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{

	system("chcp 1251");
	system("cls");

	/*char name1[11], name2[11], name3[11];

	char type1, type2, type3;

	int percent1, percent2, percent3;

	float coef1, coef2, coef3;*/

	char name1[11] = "Алюминий", name2[11] = "Стекловата", name3[11] = "Глина";

	char type1 = 'М', type2 = 'Т', type3 = 'Д';

	int percent1 = 100, percent2 = 100, percent3 = 20;

	float coef1 = 209.3, coef2 = 0.035, coef3 = 0.73;

	/*printf("1. Введите: вещество, тип, влажность (%), коефициент >");

	scanf("%11s %c %d %f", &name1, &type1, &percent1, &coef1);

	printf("2. Введите: вещество, тип, влажность (%), коефициент >");

	scanf("%11s %c %d %f", &name2, &type2, &percent2, &coef2);

	printf("3. Введите: вещество, тип, влажность (%), коефициент >");

	scanf("%11s %c %d %f", &name3, &type3, &percent3, &coef3);*/

	printf("-----------------------------------------------\n");
	printf("| Коэффициенты теплопроводимости материаллов  |\n");
	printf("|---------------------------------------------|\n");
	printf("| Вещество   | Тип   | Влажность |Коеффициент |\n");
	printf("|            |       |		 |            |\n");
	printf("|------------|-------|-----------|------------|\n");
	/* вывод строк фактических данных */
	printf("| %-11s| %-5c | 0-%-7d | %-10.1f |\n", name1, type1, percent1, coef1);
	printf("| %-11s| %-5c | 0-%-7d | %-10.3f |\n", name2, type2, percent2, coef2);
	printf("| %-11s| %-5c | 15-%-6d | %-10.2f |\n", name3, type3, percent3, coef3);
	/* вывод примечаний */
	printf("|---------------------------------------------|\n");
	printf("| Примечание: М - металлы,                    |\n");
	printf("| Т - термоизоляционные материалы             |\n");
	printf("| Д - другие материалы                        |\n");
	printf("-----------------------------------------------\n");
	return 0;



}