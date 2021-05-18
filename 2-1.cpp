#include "2-1.h"

int main() {

	int no, count;
	cin >> no;
	cin >> count;

	class Sum A(no, count);
	cout << A.result();

	return 0;
}


/*
#include <iostream>
using namespace std;


class Sum {
private:
	int a, b;
public:
	Sum(int no, int count) {
		a = no;
		b = count;
	}
	int result() {
		return a + b;
	}
};

int sum(int a, int b) {

	return a + b;
}
*/