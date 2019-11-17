#include "rand_uzly.h"
#include <stdlib.h>
#include <time.h>

rand_uzly::rand_uzly():uzly()
{
}

rand_uzly::rand_uzly(double a, double b, int n):uzly(a,b,n)
{
}

double rand_uzly::operator[](int i) const
{
	if (i >= _n || i < 0) throw"Index out of range";
	srand(time(NULL));
	double LeftPoint=_a;
	double NewPoint = _a;
	int c = 1000;
	for (i; i < _n -1; i++) {
		LeftPoint += step * i * ((double)(rand()%c) / 727);//�������� �� ��������� ��������
		if ( (i > (int)(0.1 * _n)) && (LeftPoint > (step * i + _a)))//��������� ����������
		{
			c+=-500;
		}
		else if ((i > (int)(0.1 * _n)) && (LeftPoint < (step * i + _a))) 
		{
			c += 500;
		}
		NewPoint += step * i * ((double)(rand() % c) / 503);//������ ����� � ������������
		if (NewPoint >= (_b - double(_n - 1) / 100 + (double(i) / 100)))//���� � ����� ������� �� ������� ������ ������� �� (��� 100- �������� �������� ����� �� �������) ����� ����� ������� ������ ��������� �����
		{
			return (_b - double(_n-1)/100 + (double(i) / 100));
		} 
		return NewPoint;
	}
	return _b;
}
