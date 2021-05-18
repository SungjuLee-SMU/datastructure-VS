#include "2-1.h"
#include <stdlib.h>


#define STACK_MAX 10
char stack[STACK_MAX];
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

char POP() {
	return stack[top--];
}

void PUSH(char val) {
	stack[++top]= val;
}

int main() {
	char InfixEq[10] = "6/2-3+4*2";
	char PostEq[10] = { 0 };
	int j = 0;
	//POP();
	//PUSH('+');

	for (int i = 0; i < 9; i++) {
		if (Precedence(InfixEq[i]) == 0)
			PostEq[j++] = InfixEq[i];
		else if (Precedence(InfixEq[i]) <= Precedence(stack[top])) {
			PostEq[j++]=POP();
			PUSH(InfixEq[i]);
		}
		else {
			PUSH(InfixEq[i]);
		}
	}
	while (top != -1) {
		PostEq[j++]=POP();
	}

cout << PostEq << endl;

	return 0;
}
