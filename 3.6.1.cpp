// ConsoleApplication12.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include "stdio.h"
#include <iostream>


int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("¬ведите число a\n");
	float x;
	scanf_s("%f", &x);
	if ((x <= -3) || (x >= 3))  printf("y = 3\n"); else if ((x>-3) && (x<3)) printf("y = x\n");
	system("pause");
	return 0;
}

