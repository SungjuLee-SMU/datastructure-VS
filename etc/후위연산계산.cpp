#include "2-1.h"
#include <stdlib.h>


#define STACK_MAX 10
int stack[STACK_MAX];
int top = -1;

int Precedence(char ch) {
	switch (ch) {

	case '+':
		return 12;
		break;
	case '-':
		return 12;
		break;
	case '*':
		return 13;
		break;
	case '/':
		return 13;
		break;
	default:
		return 0;
	}
}
int Cal(int Op1, int Op2, int ch) {
	int result;

	switch (ch) {

	case '+':
		return Op2 + Op1;
		break;
	case '-':
		return Op2 - Op1;
		break;
	case '*':
		return Op2 * Op1;
		break;
	case '/':
		return Op2 / Op1;
		break;
	default:
		return 0;
	}

	return result;
}

int POP() {
	int temp = stack[top];
	stack[top] = 0;
	top--;
	return temp;
}

void PUSH(int val) {
	stack[++top] = val;
}

int main() {
	int Op1;
	int Op2;
	int result;
	char PostEq[10] = "62/3-42*+";
	int j = 0;

	for (int i = 0; i < 9; i++) {
		if (Precedence(PostEq[i]) == 0)
			PUSH((PostEq[i])-48);
		else {
			Op1= POP();
			Op2 = POP();
			result = Cal(Op1, Op2, PostEq[i]);
			PUSH(result);
		}
	}
	cout << POP() << endl;

	return 0;
}
