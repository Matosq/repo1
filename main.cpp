#include<iostream>
#include<cstdio>
#include<math.h>
#include<cmath>
#include"Complex.h"

using namespace std;

long int exponent(int index, int exp)
{
	if (index == 0)
		return 1;
	else
		return exp*exponent(index - 1, exp);
}


int main()
{
	/*{
		CComplex complex1(3, 2);
		cout << complex1.GetRe() << " " << complex1.GetIm() << "j" << endl;
		cout << "Modul " << complex1.mod() << endl;
		cout << "Faza " << complex1.phase() << endl;
	}*/
	//int i = 5, j = 5;

	//CComplex macierz[i][j];
	cout << exponent(3, 4) << endl;




		system("pause");
	
	return 0;
}