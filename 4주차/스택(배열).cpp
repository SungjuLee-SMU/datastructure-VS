#include <iostream>
#define MAX 200

using namespace std;

typedef struct
{
	int Data;
}node;

class STACK
{
private:
	int Top;
	node Stack[MAX];

public:
	STACK();
	void Push(node Item);
	node Pop();
	void Init();
	bool IsEmpty();
	bool IsFull();
};

STACK::STACK() {

}

void STACK::Init()
{
	this->Top = -1;
}

bool STACK::IsEmpty()
{
	return (this->Top == -1);
}
bool STACK::IsFull()
{
	return (this->Top == (MAX - 1));
}


void STACK::Push(node Item)
{
	Stack[++Top] = Item;
}

node STACK::Pop()
{
	if (IsEmpty() == true) {
		cout << "Stack is empty" << endl;
		node temp;
		temp.Data = -100;
		return temp;
	}
	return Stack[this->Top--];
}



int main() {
	STACK S;
	node item;

	S.Init();
	cout << S.IsEmpty() << endl;
	cout << S.IsFull() << endl;

	item.Data = 20;
	S.Push(item);

	cout << S.Pop().Data << endl;

	item.Data = 11;
	S.Push(item);

	item.Data = 21;
	S.Push(item);

	cout << S.Pop().Data << endl;

	item.Data = 31;
	S.Push(item);

	cout << S.Pop().Data << endl;

	cout << S.Pop().Data << endl;

	return 0;
}
