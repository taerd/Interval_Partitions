#pragma once
#include "uzly.h"
class ravn_uzly :
	public uzly
{
public:
	ravn_uzly();
	ravn_uzly(double a, double b, int n);
	virtual double operator [] (int i) const;//������ ��� ������ ���� virtual � �� override.������ ��� �� ���� ���������� � ����� ������
};

