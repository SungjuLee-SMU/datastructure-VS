#include "리스트(클래스).h"

LISTTYPE LIST;

int main() {

	LIST.Create(100);
	cout << LIST.IsEmpty() << endl;
	cout << LIST.Length() << endl;

	cout << LIST.Insert(0, 10) << endl;
	cout << LIST.Insert(1, 11) << endl;
	cout << LIST.Retrieve(11) << endl;

	cout << LIST.Delete(0) << endl;
	cout << LIST.Retrieve(11) << endl;

	cout << LIST.Insert(1, 13) << endl;
	cout << LIST.Insert(2, 14) << endl;
	cout << LIST.Get_ITEM(0) << LIST.Get_ITEM(1) << LIST.Get_ITEM(2) << endl;
	cout << LIST.Length() << endl;
	cout << LIST.Retrieve(11) << endl;
	cout << LIST.Retrieve(14) << endl;
	cout << LIST.Retrieve(15) << endl;

	cout << LIST.Destroy() << endl;

	return 0;
}