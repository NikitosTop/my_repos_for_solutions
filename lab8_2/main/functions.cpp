#include "functions.h"

struct List* create(void)
{
	system("cls");
	List* temp, * tail; char c;
	struct List* head = tail = temp = (List*)malloc(sizeof(List));

	printf("\n  name: ");
	scanf_s("%s", temp->name, 10);
	setbuf(stdin, NULL);
	printf("\n  type: ");
	scanf_s("%s", temp->crypto, 10);
	setbuf(stdin, NULL);
	printf("\n  temperature: ");
	scanf_s("%fl", &temp->price);
	printf("\n  speed: ");
	scanf_s("%d", &temp->amount);
	do {
		temp = (List*)malloc(sizeof(List));

		printf("\n  name: ");
		scanf_s("%s", temp->name, 10);
		setbuf(stdin, NULL);
		printf("\n  crypto: ");
		scanf_s("%s", temp->crypto, 10);
		setbuf(stdin, NULL);
		printf("\n price: ");
		scanf_s("%fl", &temp->price);
		printf("\n  amount: ");
		scanf_s("%d", &temp->amount);


		tail->next = temp;

		tail = temp;
		printf(" Закінчити? y/n  ");
		c = _getch();

	} while (c != 'y');
	temp->next = NULL;
	system("cls");
	return head;
}

void print(List* head)
{
	system("cls");
	List* temp;
	temp = head;
	int i = 1;
	while (temp != NULL)
	{
		printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n", i, temp->name, temp->crypto, temp->price, temp->amount);
		temp = temp->next;
		i++;
	}
	printf("\n\n");
	//_getch();
}

int search(List* head) {
	system("cls");
	int choice;
	List* temp = head;
	char type1[10];
	int tem1, sp1;
	int i = 1;
	bool q = true;
	while (true)
	{

		printf("\n  1 - Поиск по имени\n");
		printf("\n  2 - Поиск по типу\n");
		printf("\n  3 - Поиск по температуре \n");
		printf("\n  4 - Поиск по скорости\n");
		printf("\n  5 - Выход\n");
		printf("\n  >> ");

		scanf_s("%d", &choice);

		switch (choice) {

		case 1:
			char name1[10];
			temp = head;

			printf("\n  name>");
			scanf("%s", name1, 10);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (strcmp(temp->name, name1) == 0) {
					q = false;
					printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n",
						i, temp->name, temp->crypto, temp->price, temp->amount);

				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\n  Нечего не найдено!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 2:

			char type1[10];
			temp = head;

			printf("\n  type>");
			scanf("%s", type1, 10);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (strcmp(temp->crypto, type1) == 0) {
					q = false;
					printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n",
						i, temp->name, temp->crypto, temp->price, temp->amount);

				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\n  Нечего не найдено!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 3:

			float tem1;
			temp = head;

			printf("\n  temperature>");
			scanf("%fl", &tem1);
			setbuf(stdin, NULL);


			while (temp != NULL) {
				if (temp->price == tem1) {
					q = false;
					printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n",
						i, temp->name, temp->crypto, temp->price, temp->amount);

				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\n  Нечего не найдено!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 4:

			int sp1;
			temp = head;

			printf("\n  temperature>");
			scanf("%d", &sp1);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (temp->amount == sp1) {
					q = false;
					printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n",
						i, temp->name, temp->crypto, temp->price, temp->amount);
				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\n  Нечего не найдено!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 5:
			printf("\n  Выход\n\n");
			return 0;
			break;


		default:
			printf("\n  Вы ввели не то число!!!\n\n");
			break;
		}
	}
}

struct List* ADD(int el, List tt, List* head) {
	List* temp = (List*)malloc(sizeof(List));

	if (el == 1) {
		temp->next = head;
		head = temp;

	}
	else {
		List* temp_pos = head;

		for (int i = 0; i < el - 2; i++)
			temp_pos = temp_pos->next;

		temp->next = temp_pos->next;
		temp_pos->next = temp;

	}
	strcpy(temp->name, tt.name);
	strcpy(temp->crypto, tt.crypto);
	temp->price = tt.price;
	temp->amount = tt.amount;
	return head;
}

struct List* del(int el, List* head) {
	List* temp_pos = head;

	if (el == 1) {
		head = head->next;
		free(temp_pos);
	}
	else {
		for (int i = 0; i < el - 2; i++)
			temp_pos = temp_pos->next;

		List* temp = temp_pos->next;

		if (temp->next == NULL) temp_pos->next = NULL;
		else temp_pos->next = temp->next;

		free(temp);
	}
	return head;
}

struct List* sort(List* head) {
	struct List* temp = head;

	int lines = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		lines++;
	}
	List* ptr, * trash, * tmp;
	tmp = (struct List*)malloc(sizeof(struct List));

	for (int n = 0; n < lines; n++) {

		ptr = head;
		while (ptr->next != NULL) {

			temp = ptr->next;
			if (strcmp(ptr->name, temp->name) > 0) {

				trash = temp->next;
				*tmp = *ptr;
				*ptr = *temp;
				free(temp);
				ptr->next = (struct List*)malloc(sizeof(struct List));
				*ptr->next = *tmp;
				ptr->next->next = trash;
			}

			ptr = ptr->next;
		}
	}

	free(tmp);
	return(head);
}

void addfile(List* head) {

	system("cls");
	List* temp;
	temp = head;
	int i = 1;

	FILE* f;
	fopen_s(&f, "data.txt", "w");
	if (!f) {
		puts("error opening");
		exit(0);
	}
	while (temp != NULL)
	{
		fprintf_s(f, "%-10s %-8s  %-3.2f  %4d\n", temp->name, temp->crypto, temp->price, temp->amount);
		temp = temp->next;
		i++;
	}

}

struct List* CreateFromFile() {


	struct List* head = (struct List*)malloc(sizeof(struct List));
	struct List* tail = head, * temp = head;
	int size = 0, i = 0;


	FILE* file = NULL;
	fopen_s(&file, "data.txt", "r");
	if (file == NULL) {

		exit(0);
	}

	char text;
	while (true) {
		text = fgetc(file);
		if (text == '\n')size++;
		else if (text == EOF) break;
	}

	fseek(file, 0, SEEK_SET);
	while (i != size) {
		fscanf_s(file, "%s", temp->name, 10);
		fscanf_s(file, "%s", temp->crypto, 7);
		fscanf_s(file, "%fl", &temp->price);
		fscanf_s(file, "%d", &temp->amount);

		i++;
		tail->next = temp;
		tail = temp;
		temp = (List*)malloc(sizeof(List));
	}
	tail->next = NULL;

	fclose(file);
	return head;
}