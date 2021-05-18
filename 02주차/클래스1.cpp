#include "2-1.h"
#include <stdlib.h>

// 제작자의 코드
class USERDATA
{
public:
	// 멤버 변수 선언
	int nAge;
	char szName[32];
	// 멤버 함수 선언 및 정의
	void Print(void)
	{
		// nAge와 szName은 Print() 함수의 지역 변수가 아니다!
		printf("%d, %s\n", nAge, szName);
	}
};

// 제작자 코드
class CTest
{
public:
	// CTest 클래스의 '생성자 함수' 선언 및 정의
	CTest()
	{
		cout << "CTest::CTest()" << endl;
		// 인스턴스가 생성되면 멤버 데이터를 '자동'으로 초기화한다.
		m_nData = 10;
	}
	// 멤버 데이터 선언
	int m_nData;
	// 멤버 함수 선언. 정의는 분리했다!
	void PrintData(void);

	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	}



};
void CTest::PrintData(void)
{
	// 멤버 데이터에 접근하고 값을 출력한다.
	cout << m_nData << endl;
}

int main(void)
{
	cout << "Begin" << endl;
	CTest a;
	cout << "End" << endl;
	return 0;

}

