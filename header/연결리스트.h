#include <iostream>
using namespace std;

typedef struct LIST_NODE
{
	int Data;
	LIST_NODE *Next_Ptr;
} LIST_NODE;

class Linked_LIST
{
private:
	int Global_Position;
	LIST_NODE* Head_NODE;

public:
	Linked_LIST();
	int Create();
	int Get_ITEM(int n);
	bool IsEmpty();
	int Length();
	int Insert(int Position, int Data);
	int Retrieve(int Data);
	int Delete(int Position);
	int Destroy();
};

extern Linked_LIST LIST;