/* rpn.c
 *
 * Solution to Programming Project 5 (Chapter 15)
 *
 * From C PROGRAMMING: A MODERN APPROACH (Second Edition)
 *
 * Copyright (c) 2008 W. W. Norton & Company
 * All rights reserved.
 *
 * This program may be freely distributed for class use,
 * provided that this copyright notice is retained.
 */

 // Insert your code for including header files

#include <stdio.h>
#include "stack.h"
#include <stdlib.h>


int main(void)
{
	char ch;
	int op1, op2;

	printf("Enter an RPN expression: ");
	for (;;) {
		scanf_s(" %c", &ch);
		switch (ch) {
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
			push(ch - '0');
			break;
		case '+':
			op1 = pop();
			op2 = pop();
			push(op1 + op2);
			break;
		case '-':
			// Insert your code
			op1 = pop();
			op2 = pop();
			push(op2 - op1);
			break;
		case '*':
			op1 = pop();
			op2 = pop();
			push(op1 * op2);
			break;
		case '/':
			op1 = pop();
			op2 = pop();
			push(op2 / op1);
			break;
		case '=':
			op1 = pop();
			printf("Value of Expression : %d\n", op1);
			printf("Enter an RPN expression: ");
			break;
		
		default:
			exit(EXIT_SUCCESS);
		}
	}

	return 0;
}
