#include "2-1.h"
#include <stdlib.h>

#define Queue_MAX 3
int Queue[Queue_MAX];
int front;
int rear;
int Count;
// Rear = (Rear + 1) % MAX;
//Front = (Front + 1) % MAX;   
void Create() {
	front = -1;
	rear = -1;
	Count = 0;
}
void Destroy() {
	front = 0;
	rear = 0;
	Count = 0;
}
bool IsEmpty() {
	if (rear < front) return true;
	else false;
}
bool IsFull() {
	if (Count == Queue_MAX)return true;
	else false;
}

void Add(int item) {
	if (IsFull() == true) return;
	rear = (rear + 1) % Queue_MAX;
	Queue[rear] = item;
	Count++;
}
void Remove() {
	if (IsEmpty() == true) return;

	front = (front + 1) % Queue_MAX;
	Queue[front] = 0;
	Count--;
}
int GetFront() {

	return Queue[front];
}
int GetSize() {

	return Count;
}

int main() {
	Create();
	Add(10);
	Add(20);
	Add(30);
	Add(40);
	Remove();
	Remove();
	Remove();
	Add(10);
	Add(20);
	cout << GetFront() << endl;

	Destroy();
	return 0;
}
