// ConsoleApplication12.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "stdio.h"
#include <iostream>


int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("������� ����� a\n");
	float x;
	scanf_s("%f", &x);
	if ((x <= -3) || (x >= 3))  printf("y = 3\n"); else if ((x>-3) && (x<3)) printf("y = x\n");
	system("pause");
	return 0;
}

