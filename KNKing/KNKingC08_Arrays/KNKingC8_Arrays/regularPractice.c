// 배열의 각 요소에 저장된 값 합하기
#include <stdio.h>

main()
{
	//row 초기화
	int rowcol[5][5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		printf("Enter row %d : ", i+1);
		for (int j = 0; j < 5; j++)
		{
			scanf_s("%d", &rowcol[i][j]);
		}
	}
	printf("\n");

	/*
	int rowcol[5][5] = { {8,3,9,0,10},
						  {3,5,17,1,1},
						  {2,8,6,23,1},
						  {15,7,3,2,9},
						  {6,14,2,6,0}
	};
	*/
	// 합한 값을 저장할 rowTotal, colTotal 변수를 0으로 초기화
	int rowTotal[5] = { 0 };
	int colTotal[5] = { 0 };
	printf("Row totals : ");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			rowTotal[i] += rowcol[i][j];
		}
		
		printf("%d ", rowTotal[i]);
	}
	printf("\n");
	printf("Col totals : ");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			colTotal[i] += rowcol[j][i];
		}

		printf("%d ", colTotal[i]);
	}


}