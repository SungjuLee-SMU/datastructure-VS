#include <iostream>
using namespace std;

#define MAX 10000

typedef struct
{
	int Data;
} LIST_NODE;

class LISTTYPE
{
private:
	int Global_Position;
	LIST_NODE* NODE;

public:
	LISTTYPE();
	int Create(int n);
	int Get_ITEM(int n);
	bool IsEmpty();
	int Length();
	int Insert(int Position, int Data);
	int Retrieve(int Data);
	int Delete(int Position);
	int Destroy();
};

extern LISTTYPE LIST;