#include "ravn_uzly.h"

ravn_uzly::ravn_uzly():uzly()
{
}
ravn_uzly::ravn_uzly(double a, double b, int n) : uzly(a, b, n) 
{
}
double ravn_uzly::operator[](int i) const 
{
	if (i >= _n || i < 0) throw"Index out of range";
	return (_b - _a) / (_n - 1) * i + _a;
}
