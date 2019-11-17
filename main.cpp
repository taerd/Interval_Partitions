#include <iostream>
#include "uzly.h"
#include "ravn_uzly.h"
#include "rand_uzly.h"
#include "cheb_uzly.h"
using namespace std;
void print(const uzly & object)
{
	for (int i = 0; i < object.get_n(); i++) 
	{
		try 
		{
			cout << object[i] << " ";
		}
		catch (const char* a) 
		{
			cout << a << endl;
		}
	}
	cout << endl;
}
void main() 
{
	ravn_uzly otrezok1 (-1, 4, 11);
	rand_uzly otrezok2(-1, 4, 110);
	cheb_uzly otrezok3(-1, 4, 11);
	print(otrezok1);
	//print(otrezok2);
	print(otrezok3);
	system("pause");
}