#include "2-1.h"
#include <stdlib.h>

#define Queue_MAX 3
int Queue[Queue_MAX];
int front;
int rear;
int Count;

void Create() {
	front = 0;
	rear = -1;
	Count = 0;
}
void Destroy() {
	front = 0;
	rear = 0;
	Count = 0;
}
int IsEmpty() {
	int temp = 0;
	if (front > rear) {
		temp = 1;
	}
	else temp =0;

	return temp;
}
int IsFull() {
	if (rear < 2) {
		return 0;
	}
	else 1;
}

void Add(int item) {
	if (IsFull() == 0) 	
		Queue[++rear] = item;
}
void Remove() {
	if (IsEmpty() == 0)
		Queue[front++] = 0;
}
int GetFront() {

	return Queue[front];
}
int GetSize() {

	return rear - front + 1;
}

int main() {
	Create();
	Add(10);
	Add(20);
	Add(30);
	Add(40);
	Remove();
	Remove();
	Add(50);
	cout << GetFront() << endl;

	Destroy();
	return 0;
}
