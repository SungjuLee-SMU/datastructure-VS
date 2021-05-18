#include "2-1.h"
#define MAX 100

typedef struct
{	
	int Data;
} LIST_NODE;

typedef struct
{
	int Global_Position;
	LIST_NODE *NODE;
} LISTTYPE;

LISTTYPE LIST;

int Create(int n) {
	LIST.NODE = new LIST_NODE[n];
	LIST.Global_Position = -1;
	return 0;
}
bool IsEmpty() {
	if (LIST.Global_Position == -1)return true;
	else return false;
}

int Length() {
	return LIST.Global_Position + 1;
}

int Insert(int Position, int Data) {
	for (int i = Position + 1; i < Length() + 1; i++)
		LIST.NODE[i].Data = LIST.NODE[i - 1].Data;
	LIST.NODE[Position].Data = Data;
	LIST.Global_Position++;
	return Data;
}

int Retrieve(int Data) {
	for (int i = 0; i < Length(); i++)
		if (LIST.NODE[i].Data == Data) return i;
	return -1; // not found
}


int Delete(int Position) {
	if (IsEmpty() == true) return 0;
	int temp = LIST.NODE[Position].Data;
	for (int i = Position; i < Length()-1; i++)
		LIST.NODE[i].Data = LIST.NODE[i + 1].Data;
	LIST.Global_Position--;
	return temp;
}


int Destroy() {
	delete[] LIST.NODE;
	return 0;
}
int main() {

	Create(100);
	cout << IsEmpty() << endl;
	cout << Length() << endl;

	cout << Insert(0, 10) << endl;
	cout << Insert(1, 11) << endl;
	cout << Retrieve(11) << endl;

	cout << Delete(0) << endl;
	cout << Retrieve(11) << endl;

	cout << Insert(1, 13) << endl;
	cout << Insert(2, 14) << endl;
	cout << LIST.NODE[0].Data << LIST.NODE[1].Data << LIST.NODE[2].Data << endl;
	cout << Length() << endl;
	cout << Retrieve(11) << endl;
	cout << Retrieve(14) << endl;
	cout << Retrieve(15) << endl;

	cout << Destroy() << endl;

	return 0;
}