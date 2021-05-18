#include "2-1.h"
int Global_Position=-2;
int* LIST;

int Create(int n) {
	LIST = new int [n];
	Global_Position = -1;
	return 0;
}
bool IsEmpty() {
	if (Global_Position == -1)return true;
	else if (Global_Position >0) return false;
	else return false;
}

int Length() {
	return Global_Position+1;
}

int Insert(int Position, int Data) {
	for (int i = Position+1; i < Length()+1; i++)
		LIST[i] = LIST[i-1];
	LIST[Position] = Data;
	Global_Position++;
	return Data;
}

int Retrieve(int Data) {
	for (int i = 0; i < Length(); i++)
		if (LIST[i] == Data) return i;
	return -1; // not found
}


int Delete(int Position) {
	if (IsEmpty() == true) return 0;
	int temp = LIST[Position];
	for (int i = Position; i < Length()-1; i++)
		LIST[i] = LIST[i+1];
	Global_Position--;
	return temp;
}


int Destroy() {
	delete[]LIST;
	return 0;
}
int main(){

	Create(100);
	cout << IsEmpty()<<endl;
	cout << Length()<< endl;

	cout << Insert(0, 10) << endl;
	cout << Insert(1, 11) << endl;
	cout << Retrieve(11) << endl;

	cout << Delete(0) << endl;
	cout << Retrieve(11) << endl;

	cout << Insert(1, 13) << endl;
	cout << Insert(2, 14) << endl;
	cout << LIST[0] << LIST[1] << LIST[2] << endl;
	cout << Length() << endl;
	cout << Retrieve(11) << endl;
	cout << Retrieve(14) << endl;
	cout << Retrieve(15) << endl;

	cout << Destroy() << endl;

	return 0;
}