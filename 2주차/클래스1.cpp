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
class CTest
{
public:
	// CTest Ŭ������ '������ �Լ�' ���� �� ����
	CTest()
	{
		cout << "CTest::CTest()" << endl;
		// �ν��Ͻ��� �����Ǹ� ��� �����͸� '�ڵ�'���� �ʱ�ȭ�Ѵ�.
		m_nData = 10;
	}
	// ��� ������ ����
	int m_nData;
	// ��� �Լ� ����. ���Ǵ� �и��ߴ�!
	void PrintData(void);

	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	}



};
void CTest::PrintData(void)
{
	// ��� �����Ϳ� �����ϰ� ���� ����Ѵ�.
	cout << m_nData << endl;
}

int main(void)
{
	cout << "Begin" << endl;
	CTest a;
	cout << "End" << endl;
	return 0;

}

