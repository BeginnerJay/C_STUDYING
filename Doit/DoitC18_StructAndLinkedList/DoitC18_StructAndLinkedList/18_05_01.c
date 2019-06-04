// 사용자에게 묻지 않고 프로그램이 알아서 동적 메모리 할당하기
// 기존 방식에서 사용자에게 입력받을 숫자의 갯수를 묻는 이유는, 할당된 주소를 저장할 포인터 변수를 1개만 이용하기 때문.
	// 즉 한 번의 메모리 할당으로 저장할 공간을 만드는 것!
// 메모리를 한 번에 할당하지 않고, 사용자가 숫자를 입력할 때마다 그 숫자를 저장하는 동적 메모리를 늘려나가면 된다.
// 이 방법을 사용하려면 동적으로 할당된 메모리의 갯수만큼 포인터가 있어야 한다.
// 포인터는 숫자1과 포인터2를 가리키고, 포인터2는 숫자2와 포인터 3을 가리키고... 이런 식으로 동적으로 할당하기!
// 이게 LinkedList이다.
// 헤드 포인터는 노드가 아니다.
#include <stdio.h>
#include <malloc.h>

typedef struct node
{
	int number; // 정수 값을 저장할 변수
	struct node* p_next; // 다음 노드를 가리킬 포인터
} NODE;

/*
기존 연결 리스트에 노드가 없는 경우, 이 함수로 전달된 p_head와 p_tail 값을 수정해야 한다.
그러므로 AddNumber를 호출할 때, p_head, p_tail 포인터 변수의 주소 값을 넘겨준다.
따라서 1차원 포인터의 주소 값을 받아서 사용해야 하므로 두 개의 2차원 포인터를 사용한다.
*/
void AddNumber(NODE** pp_head, NODE** pp_tail, int data)
{
	if (NULL != *pp_head) 
		// AddNumber 함수를 호출할 때 전달받은 p_head 포인터에 저장한 주소 값을 의미.
		// 이 값이 NULL이면 기존 연결 리스트에 NODE가 없다는 뜻이다.
	{
		(*pp_tail)->p_next = (NODE*)malloc(sizeof(NODE)); // 새 노드를 할당함
		*pp_tail = (*pp_tail)->p_next; // p_tail(*pp_tail)에 새 노드의 주소 값을 저장함.
	}
	else // p_head 값이 NULL이라서 첫 노드가 추가됨. p_head 값에 직접 대입함
	{
		*pp_head = (NODE*)malloc(sizeof(NODE)); // 새 노드를 할당함
		*pp_tail = *pp_head; // p_tail(*pp_tail)에 새 노드의 주소 값을 저장함.;
	}
	(*pp_tail)->number = data; // 새 노드의 number에 data 값을 저장함
	(*pp_tail)->p_next = NULL; // 다음 노드가 없음을 명시함.
}

main(void)
{
	// 노드의 시작과 끝을 기억할 포인터
	NODE* p_head = NULL, * p_tail = NULL, * p;
	int sum = 0, temp;

	while (1) // 무한 루프
	{
		printf("숫자를 입력하세요(9999를 누르면 종료) : ");
		scanf_s("%d", &temp);
		if (9999 == temp)
		{
			break;
		}
		AddNumber(&p_head, &p_tail, temp);
	}
	
	p = p_head; 
	// 입력한 숫자를 출력하기 위해서, 노드를 탐색할 포인터에 시작 노드의 주소 값을 대입한다.
	// p_head를 직접 사용하면 시작 노드의 위치를 잃게 된다.
	while (NULL != p)
	{
		if (p != p_head)
		{
			printf(" + "); // 입력한 숫자 사이에 + 출력
		}
		printf(" %d ", p->number); // 입력한 숫자 출력
		sum = sum + p->number; // 입력한 숫자들을 합산함
		p = p->p_next; // 다음 노드로 이동함
	}
	printf(" = %d\n", sum); // 합산한 값을 출력함
	
	while (NULL != p) // p_head값이 null이 될 때까지 반복함
	{
		p = p_head; // 현재 노드를 삭제하기 위해 p 변수에 노드 주소 값을 저장함
		p_head = p_head->p_next; // 시작 위치를 다음 노드로 옮김
		free(p); // 기억했던 주소를 사용하여 노드를 삭제함
	}
	p_tail = p_head; // 반복문을 나오면 p_head 값은 NULL, p_tail 값도  NULL로 변경해준다.
}