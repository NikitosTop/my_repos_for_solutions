#include "functions.h"

int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice, el;
	struct List* head = NULL;
	List tt;
	bool what = false;

	while (true)
	{

		printf("\n  1 - Создание списка\n");
		printf("\n  2 - Печать спика\n");
		printf("\n  3 - Поиск по критерию (осуществить выбор критерия)\n");
		printf("\n  4 - Добавление элемента (в любое заданное место)\n");
		printf("\n  5 - Удаление любого элемента\n");
		printf("\n  6 - Сортировка\n");
		printf("\n  7 - Запись списка в файл \n");
		printf("\n  8 - Создание нового списка из файла \n");
		printf("\n  9 - Выход из программы\n");
		printf("\n  >> ");

		scanf_s("%d", &choice);
		if (choice == 1 || choice == 8) what = true;
		switch (choice) {
		case(1): head = create();
			break;

		case(2):
			if (head == NULL) {
				printf("Структуры не существует!!!\n\n");
				break;
			}
			print(head);
			break;

		case(3):
			if (head == NULL) {
				printf("Структуры не существует!!!\n\n");
				break;
			}
			else
				search(head);

			break;

		case(4):
			cout << "ВВедите номер вставляемого элемента -> ";
			scanf_s("%d", &el);
			cout << "ВВедите значения вставляемого элемента -> ";
			printf("\n  name: ");
			scanf_s("%s", tt.name, 10);
			setbuf(stdin, NULL);
			printf("\n  crypto: ");
			scanf_s("%s", tt.crypto, 10);
			setbuf(stdin, NULL);
			printf("\n  price: ");
			scanf_s("%fl", &tt.price);
			printf("\n  amount: ");
			scanf_s("%d", &tt.amount);

			head = ADD(el, tt, head);
			break;

		case(5):
			if (head == NULL) {
				printf("Структуры не существует!!!\n\n");
				break;
			}
			else {
				cout << "Введите номер удаляемого элемента -> ";
				scanf_s("%d", &el);
				head = del(el, head);

			}

			break;

		case(6):
			if (head == NULL) {
				printf("Структуры не существует!!!\n\n");
				break;
			}
			else
				head = sort(head);
			break;

		case(7):
			if (head == NULL) {
				printf("Структуры не существует!!!\n\n");
				break;
			}
			else
				addfile(head);
			break;

		case(8): 
			head = CreateFromFile();
			break;

		case(9):
			printf("Выход\n");
			return 0;

		default:
			system("cls");
			printf("Неверное число\n");
			break;
		}
	}

	free(head);
	return 0;
}
