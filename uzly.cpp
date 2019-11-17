#include "uzly.h"

uzly::uzly()
{
	_a = 0;
	_b = 1;
	_n = 2;
}
uzly::uzly(int a, int b, int n):_a(a),_b(b),_n(n)
{
	if (_a > _b)//меняем местами 
	{
		int swp;
		swp = _a;
		_a = _b;
		_b = swp;
	}
	else if (_a == _b) _b++;
	if (_n < 2)
	{
		_n = 2;
	}
}
