#include<iostream>
#include<cstdio>
using namespace std;
#define M_PI       3.14159265358979323846   // pi
class CComplex
{
	double re;
	double im;
	//friend class MMatrix;
public:
	CComplex(double = 0, double = 0);
	void SetRe(double r);
	void SetIm(double i);
	double GetRe();
	double GetIm();
	~CComplex();
	double mod();
	double phase();
};
