#include <iostream>
using namespace std;

class Sum {

private :
	int no, count;
public :
	Sum(int a, int b) {
		this->no = a;
		this->count = b;
	}
	int result() {
		return this->no + this->count;
	}
};

int sum(int a, int b) {

	return a + b;
}
