#include <stdio.h>
#define MAX_COUNT 5 // 친구 등록 가능한 최대 수

// 배열을 사용해 친구 정보 관리하기

typedef char NAME_TYPE[14];
/*
MAX_COUNT만큼의 친구 이름을 저장하기 위한 name 배열은 char name[MAX_COUNT][14]; 처럼 2차원 배열로 선언하여 사용.
name 배열을 다른 함수에서 포인터로 받으려면 char (*p_name)[14]처럼 사용해야 한다.
이는 형태가 복잡하기 때문에, 이름을 위한 자료형 NAME_TYPE을 재정의한다.
*/

int AddFriend(NAME_TYPE *p_name, unsigned short int *p_age, float *p_height, float *p_weight, int count)
{
	if (MAX_COUNT) // 입력 가능한 최대 수를 넘었는지 체크함
	{
		printf("\n새로운 친구 정보를 입력하세요\n");
		printf("1. 이름 : ");
		scanf_s("%s", *(p_name + count), 14);
		printf("2. 나이 : ");
		scanf_s("%hu", (p_age + count));
		printf("3. 키 : ");
		scanf_s("%f", (p_height + count));
		printf("4. 몸무게 : ");
		scanf_s("%f", (p_weight + count));
		printf("입력을 완료했습니다. \n\n");
		return 1; // 친구 추가 성공하면 1을 반환함.
	}
	else // 입력 가능한 최대 수를 넘었을 때 오류를 출력함
	{
		printf("최대 인원을 초과하여 입력할 수 없습니다.\n");
		printf("최대 %d명까지만 관리 가능합니다.\n\n", MAX_COUNT);
	}
	return 0; // 친구 추가 실패
}

void ShowFriendList(NAME_TYPE* p_name, unsigned short int* p_age, float* p_height, float* p_weight, int count)
{
	if (count > 0)
	{
		printf("\n등록된 친구 목록\n");
		printf("=======================================\n");
		for (int i = 0; i < count; i++)
		{
			printf("%-14s, %3d, %6.2f, %6.2f\n", *(p_name + i), *(p_age + i), *(p_height + i), *(p_weight + i));
		}
		printf("=======================================\n\n");
	}
	else // 등록된 친구가 없으면 오류를 출력함
	{
		printf("\n등록된 친구가 없습니다.\n\n");
	}
}

void main()
{
	NAME_TYPE name[MAX_COUNT]; // 친구 이름을 저장할 배열
	unsigned short int age[MAX_COUNT]; // 친구 나이를 저장할 배열
	float height[MAX_COUNT];
	float weight[MAX_COUNT];
	int count = 0, num;

	while (1)
	{
		printf("[menu]\n");
		printf("=======================================\n");
		printf("1. 친구 추가\n");
		printf("2. 친구 목록 보기\n");
		printf("3. 종료\n");
		printf("=======================================\n");
		printf("번호 선택 : ");
		scanf_s("%d", &num); // 사용자에게 번호를 입력받음
		if (num == 1)
		{
			if (1 == AddFriend(name, age, height, weight, count))
			{
				count++;
			}
		}
		else if (num == 2)
		{
			ShowFriendList(name, age, height, weight, count);
		}
		else if (num == 3)
		{
			break;
		}
		else
		{
			printf("유효하지 않은 번호입니다!\n\n");
		}
	}
}