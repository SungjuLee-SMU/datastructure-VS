#include "2-1.h"
#include <stdlib.h> 

int Max(int a, int b){
	if (a > b) return a;
	else return b;
}

int Max_index(int a, int b) {
	if (a > b) return 1;
	else return 2;
}

int main() {
	int S[10] = { -1, 10, 5, 6, -200, 8, -18, 9, 15, -100 };
	int max = S[0];
	int start=0;
	int end = 0;

	for (int i = 1; i < 10; i++) {
		if (Max_index(max, max + S[i]) == 2) {
			max = Max(max, max + S[i]);
			end = i;
		}
		else {
			max = 0;
			end = i - 1;
		}

		

		if (Max_index(max, S[i]) == 2) {
			start = i;
			max = Max(max, S[i]);
		}
		else {
			max = 0;
			start = i - 1;
		}

	}
	cout << start << endl << end << endl << max << endl;
	return 0;
}
