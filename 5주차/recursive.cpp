#include "2-1.h"
void Reverse(char S[], int Size)
{
    if (Size == 0)
        return;
    else
    {
        printf("%c", S[Size - 1]);
        Reverse(S, Size - 1);
    }
}

void Reverse2(char S[], int First, int Last)
{
    if (First > Last) {
        
        return;
    }
    else {
        Reverse2(S, First + 1, Last);
        printf("%c", S[First]);
    }

}

void swap(int S[], int a, int b) {
	int temp = S[a];
	S[a] = S[b];
	S[b] = temp;
}
int partition(int S[], int low, int high) {
	int down=low;
	int up=high-1;
	int pivot = high;

	/*
	for(int i = low; i < high; i++)
		if (S[i] <= S[pivot])down = i;

	for (int i = high; i > low; i--)
		if (S[i] >= S[pivot])up = i;
	swap(S, down, up);

	*/

	while (down < up) {
		for (; down < up; down++) {
			if (S[down] > S[pivot]) break;
		}
		for (; up > down ; up--) {
			if (S[up] < S[pivot]) break;
		}

		if (down != up) {
			swap(S, down++, up--);
			//cout << S[0] << S[1] << S[2] << S[3] << S[4] << S[5] << S[6] << S[7] << endl;
		}
	}
	swap(S, down, pivot);
	//cout << S[0] << S[1] << S[2] << S[3] << S[4] << S[5] << S[6] << S[7] << endl;
	pivot = down;
	
	return pivot;
}

int findKth(int S[], int k, int low, int high) {
	int pivot = partition(S, low, high);
	
	int Item;
	if (pivot == k) {
		Item = S[pivot];
	}
	else if (pivot < k) {
		Item = findKth(S, k, pivot + 1, high);
	}
	else {
		Item = findKth(S, k, low, pivot - 1);
	}
	return Item;
}



int main() {
    char Str[10] = "PET";
    //Reverse(S, 4);
    //Reverse2(Str, 0, 3);


	int S[10] = { 10, 7, 2, 8, 3, 1, 9, 6 };
	int k = 3;
	/* 배열 index는 0부터 시작하므로 k를 1을 줄여서 findKth를 호출한다.*/
	cout << S[0] << " " << S[1] << " " << S[2] << " " << S[3] << " " << S[4] << " " << S[5] << " " << S[6] << " " << S[7] << endl;
	cout << "k번째 " << k<< " 값:"<<findKth(S, k - 1, 0, 7) << endl;
    return 0;
}
