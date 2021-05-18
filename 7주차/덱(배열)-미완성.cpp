#include "2-1.h"
#include <stdlib.h>

#define Queue_MAX 5
int Queue[Queue_MAX];
int front;
int rear;
int front_tail;
int rear_tail;
int Count;

void Create() {
	front = 0;
	rear = -1;
	front_tail = Queue_MAX-1;
	rear_tail = Queue_MAX;
	Count = 0;
}
void Destroy() {
	front = 0;
	rear = 0;
	front_tail = 0;
	rear_tail = 0;
	Count = 0;
}
int IsEmpty() {
	int temp = 0;
	if (front > rear) {
		temp = 1;
	}
	else temp = 0;

	return temp;
}
int IsFull() {
	if (rear < 5) {
		return 0;
	}
	else return 1;
	
}


void AddFront(int item) {
	if (IsFull() == 0)
		Queue[++rear] = item;
}
void AddRear(int item) {
	if (IsFull() == 0)
		Queue[--rear_tail] = item;
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
	AddFront(10);
	AddFront(20);
	AddRear(30);
	AddRear(40);
	//RemoveFront();
	//RemoveRear();
	
	//cout << GetFront() << endl;
	//cout << GetRear() << endl;

	cout << Queue[0] << Queue[Queue_MAX-1] << endl;
	Destroy();
	return 0;
}
