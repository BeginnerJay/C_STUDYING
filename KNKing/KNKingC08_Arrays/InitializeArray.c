#include <stdio.h>
main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	/* If the initializer is shorter than array,
	   the remaining elements of the array
	   are given the value 0.
	*/
	int b[10] = {1, 2, 3, 4, 5, 6}; // �������� 0
	// ��� ���� 0���� �ʱ�ȭ�ϱ�
	int c[10] = {0}; // ù° �� 0���� ���� �ʱ�ȭ
	// ������ ���� �ڵ������� 0���� ä����
	// �� ���� ��������.
	int d[15] = {[2] = 29, [9] = 7, [14] = 48};
	int e[] = {[2] = 29, [9] = 7, [14] = 48, [20] = 99};
	// designated initializer
	// ���ϴ� ���� ���ϴ� ������ �ʱ�ȭ, �������� 0 ó��
	// designators must be integer CONSTANT expressions.
	for (int i = 10 - 1; i >= 0; i--)
	{
		printf(" %d", a[i]);
	}
	printf("\n");
	for (int i = 10 - 1; i >= 0; i--)
	{
		printf(" %d", b[i]);
	}
	printf("\n");
	for (int i = 10 - 1; i >= 0; i--)
	{
		printf(" %d", c[i]);
	}
	printf("\n");
	for (int i = 15 - 1; i >= 0; i--)
	{
		printf(" %d", d[i]);
	}
	printf("\n");
	for (int i = 20 - 1; i >= 0; i--)
	{
		printf(" %d", e[i]);
	}
}