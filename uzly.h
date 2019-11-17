#pragma once
class uzly abstract
{
protected:
	double _a, _b;
	int _n;
public:
	uzly();
	uzly(int a, int b, int n);
	double get_a()const { return _a; }
	double get_b()const { return _b; }
	int get_n()const { return _n; }
	virtual double operator[](int i)const = 0;//чисто виртуальная функция чтобы в производных классах ее можно было переопределить
};

