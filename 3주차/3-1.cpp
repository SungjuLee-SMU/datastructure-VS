#include "2-1.h"
#include <stdlib.h>

enum Gender { MALE=1, FEMALE=2};
typedef struct
{
	char Name[20];
	Gender Sex;
	int Age;
	char Phone_Number[20];
} Profile;

int main() {
	int sex;
	Profile H_Class[10];
//	Profile *H_Class2;
	Profile* H_Class3;
	H_Class3 = new Profile [10];
	cin >> H_Class[0].Name;
	cin >> H_Class[1].Name;
	cin >> sex;

//	H_Class2 = H_Class;
//	H_Class2++;
//	cout << H_Class2->Name;

	if(sex == MALE) H_Class[0].Sex = MALE;
	else H_Class[0].Sex = FEMALE;
	cin >> H_Class[0].Age;
	cin >> H_Class[0].Phone_Number;


	cout << endl;
	cout << H_Class[0].Name << endl;
	cout << H_Class[0].Sex << endl;
	cout << H_Class[0].Age << endl;
	cout << H_Class[0].Phone_Number << endl;

	delete[] H_Class3;
	return 0;
}
