#include "2-1.h"
#include <stdlib.h>

typedef struct list_node* list_pointer;
typedef struct list_node {
	int data;
	list_pointer link;
};

void print_list(list_pointer ptr)
{
	printf("The list contains : ");
	for (; ptr != NULL ; ptr = ptr->link)printf(" % 4d", ptr->data);
	printf(" \n");
}

void main() {
	list_pointer Item1, Item2, Item3;
	//�� ��� ����
	Item1 = (list_pointer)malloc(sizeof(list_node));
	Item3 = (list_pointer)malloc(sizeof(list_node));
	Item1->data = 10;
	Item3->data = 50;
	Item3->link = NULL;
	Item1->link = Item3;

	print_list(Item1);

	//Item2 ���� �� ����
	Item2 = (list_pointer)malloc(sizeof(list_node));
	Item2->data = 30;
	Item1->link = Item2;
	Item2->link = Item3;

	print_list(Item1);

	//Item2 ����
	Item1->link = Item2->link;
	free(Item2);

	print_list(Item1);


}