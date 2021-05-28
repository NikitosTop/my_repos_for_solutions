#include <iostream>
#include "functions.h"

void Alphabet(struct List* head, char Symbol) {
	List* temp = head;
	int Search_Result = 0;

	while (temp) {
		if (*(temp->Data.name) == Symbol) {  
			Search_Result++;
		}
		temp = temp->next;
	}
	
	if (Search_Result == 0) {
		printf(". \n\n");
	}
	else if (Search_Result != 0) {
		printf("\n: %d\n", Search_Result);
	}
	
	printf("-------------------------------------------------\n");
	printf("|                world crypto money              |\n");
	printf("|------------------------------------------------|\n");
	printf("|    NAME      |  CRYPTO  |   PRICE  |  VOLUME   |\n");
	printf("|              |          |          |           |\n");
	printf("|--------------|----------|----------|-----------|\n");
	temp = head;
	while (temp) {
		if (*(temp->Data.name) == Symbol) {
			printf("|%-13s|%-5c|%-11d|%-12d|\n", temp->Data.name, temp->Data.typ, temp->Data.nom, temp->Data.colvo);
			printf("----------------------------------------------\n");
		}
		temp = temp->next;
	}
	printf("\n\n");
}

void Search_Typ(struct List* head, char Symbol) {
	List* temp = head;
	int Search_Result = 0;

	while (temp) {
		if (temp->Data.typ == Symbol) {  
			Search_Result++;
		}
		temp = temp->next;
	}
	
	if (Search_Result == 0) {
		printf(".\n\n");  return;
	}
	else if (Search_Result != 0) {
		printf("\n: %d\n", Search_Result);
	}
	
	printf("-------------------------------------------------\n");
	printf("|                world crypto money              |\n");
	printf("|------------------------------------------------|\n");
	printf("|    NAME      |  CRYPTO  |   PRICE  |  VOLUME   |\n");
	printf("|              |          |          |           |\n");
	printf("|--------------|----------|----------|-----------|\n");
	temp = head;
	while (temp) {
		if (temp->Data.typ == Symbol) {
			printf("|%-13s|%-5c|%-11d|%-12d|\n", temp->Data.name, temp->Data.typ, temp->Data.nom, temp->Data.colvo);
			printf("----------------------------------------------\n");
		}
		temp = temp->next;
	}
	printf("\n\n");
}

void Search_Nom(struct List* head, int number) {
	List* temp = head;
	int Search_Result = 0;

	while (temp) {
		if (temp->Data.nom > number) { 
			Search_Result++;
		}
		temp = temp->next;
	}
	
	if (Search_Result == 0) {
		printf(".\n\n");  return;
	}
	else if (Search_Result != 0) {
		printf("\n: %d\n", Search_Result);
	}
	
	printf("-------------------------------------------------\n");
	printf("|                world crypto money              |\n");
	printf("|------------------------------------------------|\n");
	printf("|    NAME      |  CRYPTO  |   PRICE  |  VOLUME   |\n");
	printf("|              |          |          |           |\n");
	printf("|--------------|----------|----------|-----------|\n");
	temp = head;
	while (temp) {
		if (temp->Data.nom > number) {
			printf("|%-13s|%-5c|%-11d|%-12d|\n", temp->Data.name, temp->Data.typ, temp->Data.nom, temp->Data.colvo);
			printf("----------------------------------------------\n");
		}
		temp = temp->next;
	}
	printf("\n\n");
}

void Search_Colvo(struct List* head, int number) {
	List* temp = head;
	int Search_Result = 0;

	while (temp) {
		if (temp->Data.colvo < number) {  
			Search_Result++;
		}
		temp = temp->next;
	}
	
	if (Search_Result == 0) {
		printf(".\n\n");  return;
	}
	else if (Search_Result != 0) {
		printf("\n: %d\n", Search_Result);
	}
	
	printf("-------------------------------------------------\n");
	printf("|                world crypto money              |\n");
	printf("|------------------------------------------------|\n");
	printf("|    NAME      |  CRYPTO  |   PRICE  |  VOLUME   |\n");
	printf("|              |          |          |           |\n");
	printf("|--------------|----------|----------|-----------|\n");
	temp = head;
	while (temp) {
		if (temp->Data.colvo < number) {
			printf("|%-13s|%-5c|%-11d|%-12d|\n", temp->Data.name, temp->Data.typ, temp->Data.nom, temp->Data.colvo);
			printf("----------------------------------------------\n");
		}
		temp = temp->next;
	}
	printf("\n\n");

}
