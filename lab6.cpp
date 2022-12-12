#include <iostream>
#include <cmath>
#include "lab6.hpp"

//������� �������� ���������� �������� ����� �� ��������
bool absIsPrime(int x)
{
	if (x < 0)
		x = -x;
	if (x < 2)
		return false;
	for (int d = 2; d <= sqrt(x); d++)
	{
		if (x % d == 0)
			return false;
	}
	return true;
}

//���������, ������� ������ �������� ���� ����� �������
void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}