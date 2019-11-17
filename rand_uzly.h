#pragma once
#include "uzly.h"
class rand_uzly :
	public uzly
{
private:
	double step = (_b - _a) / (_n - 1);
public:
	rand_uzly();
	rand_uzly(double a, double b, int n);
	virtual double operator [](int i)const ;
};

