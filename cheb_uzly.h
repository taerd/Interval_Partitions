#pragma once
#include "uzly.h"
class cheb_uzly :
	public uzly
{
public:
	cheb_uzly();
	cheb_uzly(double a, double b, int n);
	virtual double operator [](int i) const;
};

