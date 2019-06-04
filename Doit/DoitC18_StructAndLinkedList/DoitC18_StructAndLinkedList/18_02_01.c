// 구조체를 사용해서 사람의 신체 정보 입력 받고 출력하기
#include <stdio.h>

typedef struct People
{
	char name[12];
	unsigned short int age;
	float height;
	float weight;
} Person;

main()
{
	Person data; // Person 자료형으로 data 변수를 선언함
	printf("대상자의 정보를 입력하세요\n");
	printf("이름 : ");
	scanf_s("%s", &data.name, 12);
	// _s가 붙은 함수는, 문자열을 받을 때 사용자가 입력한 문자의 갯수가 메모리의 크기를 넘어서는 문제를 막기 위해
	// 메모리의 크기를 함수 안에 명시해야 한다.
	printf("나이 : ");
	scanf_s("%hu", &data.age);
	printf("키 : ");
	scanf_s("%f", &data.height);
	printf("몸무게 : ");
	scanf_s("%f", &data.weight);

	printf("\n입력한 정보는 다음과 같습니다. \n");
	// 키와 몸무게는 소수점 첫째 자리까지만 보여주기 위해 %.1f 형식으로 출력함
	printf("%s : %d세, %.1fcm, %.1fkg,\n", data.name, data.age, data.height, data.weight);
}