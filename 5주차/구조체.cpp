#include "2-1.h"
#include <stdlib.h>

// 제작자의 코드
/*
typedef struct USERDATA
{
	int nAge;
	char szName[32];
	//void(*Print)(struct USERDATA*);  // void(*Print) = PrintData
} USERDATA;


void PrintData(USERDATA* pUser)
{
	printf("%d, %s\n", pUser->nAge, pUser->szName);
}
*/

class USERDATA {
	public : 
		int nAge;
		char szName[32];
		void PrintData(USERDATA* pUser)
		{
			printf("%d, %s\n", pUser->nAge, pUser->szName);
		}

};

// 사용자의 코드
int main(void)
{	
	USERDATA user; 
	user.nAge = 20;
	strcpy_s(user.szName,32, "홍길동");
	user.PrintData(&user);


	return 0;
}
