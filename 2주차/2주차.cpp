#include <stdio.h>
#define _CCRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {

	int no, count;
	scanf_s("%d", &no, sizeof(no));
	scanf_s("%d", &count, sizeof(count));

	printf("%d\n", no + count);

	cin >> no;
	cin >> count;
	cout << no + count;

	return 0;
}