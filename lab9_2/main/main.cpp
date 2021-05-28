#include "list.h"

int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice, el;
	List tt;
	bool what = false;
	struct List* head = NULL, * tail = NULL;

	while (true)
	{

		printf("\n  1 - Создание списка\n");//++++++++
		printf("\n  2 - Печать с начала\n");//++++++++=
		printf("\n  3 - Печать с конца\n");//+++++++++
		printf("\n  4 - Поиск по критерию с начала\n");//++++
		printf("\n  5 - Поиск по критерию с конца\n");
		printf("\n  6 - Добавление элемента (в любое заданное место)\n");//++++++++++
		printf("\n  7 - Удаление любого элемента\n");//++++++++++
		printf("\n  8 - Сортировка\n");//++++++++
		printf("\n  9 - Запись списка в файл \n");//+++++++++++++
		printf("\n  10 - Создание нового списка из файла \n");//++++++++++
		printf("\n  11 - Выход из программы\n");//+++++++
		printf("\n  >> ");


		scanf_s("%d", &choice);
		if (choice == 1 || choice == 8) what = true;
		switch (choice) {
		case(1): create(head, tail);
			break;

		case(2):
			if (head == NULL) {
				printf("Структуры не существует!!!\n\n");
				break;
			}
			list(head, head, tail);
			break;

		case(3):
			if (tail == NULL) {
				printf("Структуры не существует!!!\n\n");
				break;
			}
			list(tail, head, tail);
			break;

		case(4):
			if (head == NULL) {
				printf("Структуры не существует!!!\n\n");
				break;
			}
			else
				search(head, tail);
			break;

		case(5):
			if (head == NULL) {
				printf("Структуры не существует!!!\n\n");
				break;
			}
			else
				searchB(head, tail);
			break;

		case(6):
			cout << "ВВедите номер вставляемого элемента -> ";
			scanf_s("%d", &el);
			cout << "ВВедите значения вставляемого элемента -> ";
			printf("\n  name: ");
			scanf_s("%s", tt.name, 10);
			setbuf(stdin, NULL);
			printf("\n  type: ");
			scanf_s("%s", tt.type, 10);
			setbuf(stdin, NULL);
			printf("\n  temperature: ");
			scanf_s("%fl", &tt.tem);
			printf("\n  speed: ");
			scanf_s("%d", &tt.sp);

			ADD(el, tt, head, tail);
			break;

		case(7):
			if (head == NULL) {
				printf("Структуры не существует!!!\n\n");
				break;
			}
			else {
				cout << "Введите номер удаляемого элемента -> ";
				scanf_s("%d", &el);
				del(el, head, tail);

			}
			break;

		case(8):
			if (head == NULL) {
				printf("Структуры не существует!!!\n\n");
				break;
			}
			else
				sort(head, tail);
			break;

		case(9):
			if (head == NULL) {
				printf("Структуры не существует!!!\n\n");
				break;
			}
			else
				addfile(head, tail);
			break;

		case(10):
			head = NULL;
			tail = NULL;
			CreateFromFile(head, tail);
			break;

		case(11):
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