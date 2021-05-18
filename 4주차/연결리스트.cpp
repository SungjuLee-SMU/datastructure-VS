#include "연결리스트.h"


Linked_LIST::Linked_LIST() {
	this->Global_Position = -2;
	this->Head_NODE = NULL;
}
int Linked_LIST::Create() {
	this->Head_NODE = NULL;
	this->Global_Position = -1;
	return 0;
}
int Linked_LIST::Get_ITEM(int n) {
	if (IsEmpty() == true) return -1;
	LIST_NODE* p = this->Head_NODE;
	for (int i = 0; i < n; i++)p = p->Next_Ptr;
	return p->Data;

}
bool Linked_LIST::IsEmpty() {
	if (this->Global_Position == -1)return true;
	else return false;
}

int Linked_LIST::Length() {
	return this->Global_Position + 1;
}

int Linked_LIST::Insert(int Position, int Data) {
	int val;
	LIST_NODE* p = new LIST_NODE;
	p->Data = Data;
	if (Position == 0)
	{
		p->Next_Ptr = NULL;
		this->Head_NODE = p;
	}
	else
	{
		LIST_NODE* Temp = this->Head_NODE;
		for (int i = 0; i < (Position - 1); i++) {
			Temp = Temp->Next_Ptr;			
		}
		Temp->Next_Ptr = p;
		p->Next_Ptr = Temp;
	}
	val = p->Data;
	this->Global_Position += 1;

	return val;
}



int Linked_LIST::Retrieve(int Data) {
	LIST_NODE* p = this->Head_NODE;
	
	for (int i = 0; i < this->Length(); i++) {
		if (p->Data == Data) return i;
		else p = p->Next_Ptr;		
	}
	return -1; // not found
}


int Linked_LIST::Delete(int Position) {
	int Data;
	if (IsEmpty() == true) return -1;
	LIST_NODE* p = this->Head_NODE;
	if (Position == 0) {
		this->Head_NODE = this->Head_NODE->Next_Ptr;
	}
	else {
		for (int i = 0; i <= Position; i++) {
			p = p->Next_Ptr;
		}
		LIST_NODE* temp = p;
		p = p->Next_Ptr;
		p = temp;
	}
	Data = p->Data;
	delete p;

	this->Global_Position--;

	return Data;
}

int Linked_LIST::Destroy() {
//	delete[] this->NODE;
	return 0;
}


Linked_LIST LIST;

int main() {

	LIST.Create();
	cout << LIST.IsEmpty() << endl;
	cout << LIST.Length() << endl;

	cout << LIST.Insert(0, 10) << endl;
	cout << LIST.Insert(1, 11) << endl;
	cout << "Retrive" << LIST.Retrieve(11) << endl;

	cout << LIST.Delete(0) << endl;
	cout << LIST.Retrieve(11) << endl;

	cout << LIST.Insert(1, 13) << endl;
	cout << LIST.Insert(2, 14) << endl;
	cout << LIST.Get_ITEM(0) << LIST.Get_ITEM(1) << LIST.Get_ITEM(2) << endl;
	cout << LIST.Length() << endl;
	cout << LIST.Retrieve(11) << endl;
	cout << LIST.Retrieve(14) << endl;
	cout << LIST.Retrieve(15) << endl;

	cout << LIST.Destroy() << endl;

	return 0;
}