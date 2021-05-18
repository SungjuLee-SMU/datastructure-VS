#include "2-1.h"
#include <stdlib.h>

// �������� �ڵ�
class USERDATA
{
public:
	// ��� ���� ����
	int nAge;
	char szName[32];
	// ��� �Լ� ���� �� ����
	void Print(void)
	{
		// nAge�� szName�� Print() �Լ��� ���� ������ �ƴϴ�!
		printf("%d, %s\n", nAge, szName);
	}
};

// ������ �ڵ�
class CRefTest
{
public:
	// ������ ����� �ݵ�� ������ �ʱ�ȭ ����� �̿��� �ʱ�ȭ�Ѵ�.
	CRefTest(int& rParam) : m_nData(rParam) { m_nData = rParam; };
	int GetData(void) const { 
		m_nData = 20;
		//SetData(50);
		return m_nData; 
	}
	void SetData(int pData)
	{
		this->m_nData = pData;
		cout << this->m_nData << endl;
	}

	void PrintData(CRefTest* pData)
	{
//		CRefTest* this = pData;
		this->m_nData = pData->m_nData;
		cout << this->m_nData << endl;
	}


private:
	// ������ ����� ��ü�� ������ �� �ݵ�� �ʱ�ȭ�ؾ� �Ѵ�.
	int& m_nData;
};
// ����� �ڵ�
int main(int argc, char* argv[])
{
	int a = 10;
	CRefTest t(a);
	cout << t.GetData() << endl;
	//t.SetData(30);
	t.PrintData(&t);
	return 0;
}

