#include "리스트(클래스).h"

LISTTYPE::LISTTYPE() {
	this->Global_Position = -2;
	this->NODE = NULL;
}
int LISTTYPE::Create(int n) {
	this->NODE = new LIST_NODE[n];
	this->Global_Position = -1;
	return 0;
}
int LISTTYPE::Get_ITEM(int n) {
	return this->NODE[n].Data;
}
bool LISTTYPE::IsEmpty() {
	if (this->Global_Position == -1)return true;
	else return false;
}

int LISTTYPE::Length() {
	return this->Global_Position + 1;
}

int LISTTYPE::Insert(int Position, int Data) {
	for (int i = Position + 1; i < Length() + 1; i++)
		this->NODE[i].Data = this->NODE[i - 1].Data;
	this->NODE[Position].Data = Data;
	this->Global_Position++;
	return Data;
}

int LISTTYPE::Retrieve(int Data) {
	for (int i = 0; i < Length(); i++)
		if (this->NODE[i].Data == Data) return i;
	return -1; // not found
}


int LISTTYPE::Delete(int Position) {
	if (IsEmpty() == true) return 0;
	int temp = this->NODE[Position].Data;
	for (int i = Position; i < Length()-1; i++)
		this->NODE[i].Data = this->NODE[i + 1].Data;
	this->Global_Position--;
	return temp;
}

int LISTTYPE::Destroy() {
	delete[] this->NODE;
	return 0;
}