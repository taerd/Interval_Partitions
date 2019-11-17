#include "cheb_uzly.h"
#include <math.h>
cheb_uzly::cheb_uzly() :uzly()
{
}

cheb_uzly::cheb_uzly(double a, double b, int n):uzly(a,b,n)
{
}

double cheb_uzly::operator[](int i) const
{
	if (i >= _n || i < 0) throw"Index out of range";
	if (i == 0) return _a;//вывод границ вместо нецелых границ
	if (i == _n - 1) return _b;
	int n = _n;
	for(n-i; i < _n ; i++ )
	{
		return (0.5 * (_b + _a) + 0.5 * (_b - _a) * cos(double(((2 * (n-i ) - 1) * 3.14) / (2 * (_n - 1)))));
	}
	/*
	for (i; i < _n -1; i++) //если в обратном порядке
	{
		return (0.5 * (_b + _a) + 0.5 * (_b - _a) * cos( double( ( ( 2 * (i+1) -1) * 3.14 ) / (2 *(_n-1) ) ) ) );
	}
	*/
}
