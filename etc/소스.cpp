#include "2-1.h"
#include<stdio.h>
#include<iostream>

using namespace std;


typedef struct {
	char name[100];
	char gender[4];
	int age;
	char phone[100];
}Data;

int main(void)
{
	cout << "¼÷Á¦ ³¡"" << endl;
	Data D[4] = {};

	for (int i = 0; i < 4; i++) {
		cin >> D[i].name;
		cin >> D[i].gender;
		cin >> D[i].age;
		cin >> D[i].phone;
	}

	for (int i = 0; i < 4; i++)
	{
		printf("%s %s %d %s\n", D[i].name, D[i].gender, D[i].age, D[i].phone);
	}

	return 0;
}
