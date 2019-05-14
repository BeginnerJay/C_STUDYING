// 간접 변수 지정 방식(pointer)으로 변수 값 교환하기
/*
short birthday; // 1. 변수 선언
short *ptr; // 2. 포인터 변수 선언
ptr = &birthday; // 3. ptr = &어쩌구는 ptr 포인터 변수가 가리키는 주소를 변경하는 것. 즉 birthday 변수의 주소를 ptr 변수에 대입
*ptr = 0x0412; // 4. *ptr = 어쩌구 는 포인터 변수가 가리키는 대상의 값을 변경하는 것. 즉 birthday 변수의 값을 0x0412로 초기화

short *ptr = &birthday로 2와 3 합칠 수 있음.
*/
// pointer를 직접 출력시키면 주소값 뱉고, *ptr 출력시키면 indirect addressing 해서 ptr에 저장된 정수값에 맞는 메모리에 있는 값 뱉는다.
#include <stdio.h>
// temp 변수를 이용해 a와 b의 값을 서로 바꿈
void Swap(int *pointerStart, int *pointerEnd)
// pointerStart 변수는 start를 indirect addressing, pointerEnd 변수는 end 변수를 indirect addressing
{
	int temp; // 바뀔 값을 임시로 저장할 변수 선언
	temp = *pointerStart; // 임시 저장 변수에 main에서 참조한 값 저장
	*pointerStart = *pointerEnd; // main의 end 변수에서 참조한 값을 pointerStart 가 가리키는 변수의 값에 저장
	*pointerEnd = temp; // main의 start변수에서 들고와서 temp 변수에 놔 뒀던 값을 pointerEnd가 가리키는 변수의 값에 저장
}

main()
{
	int start = 96, end = 5; // 변수에 저장된 값은 각각 
	printf("%d, %d\n", start, end);
	if (start > end)
	{
		Swap(&start, &end); // *pointerStart = &start 그리고 *pointerEnd = &end로 포인터 변수의 주소 지정. 각각 96과 5를 가리킨다.
		// 이제 이 96과 5라는 값이 Swap되어 돌아올 것이다.
	}
	printf("%d, %d", start, end);
}
// const int *const ptr;
// 오른쪽에 있는 cosnt는 ptr 값 자체를 고정(즉, 주소값 고정)
// 왼쪽에 있는 const는 *ptr 값을 고정(즉, 가리키는 변수의 값 고정)