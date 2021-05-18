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
class CRefTest
{
public:
	// 참조형 멤버는 반드시 생성자 초기화 목록을 이용해 초기화한다.
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
	// 참조형 멤버는 객체가 생성될 때 반드시 초기화해야 한다.
	int& m_nData;
};
// 사용자 코드
int main(int argc, char* argv[])
{
	int a = 10;
	CRefTest t(a);
	cout << t.GetData() << endl;
	//t.SetData(30);
	t.PrintData(&t);
	return 0;
}

