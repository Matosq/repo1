#include<iostream>
#include<cstdio>
#include"Complex.h"
using namespace std;

CComplex::CComplex(double x, double y)
{
	this->re = x;
	this->im = y;
}
void CComplex::SetRe(double r)
{
	re = r;
}
void CComplex::SetIm(double i)
{
	im = i;
}
double CComplex::GetRe()
{
	return re;
}
double CComplex::GetIm()
{
	return im;
}
double CComplex::mod()
{
	return sqrt(re*re+im*im);
}
double CComplex::phase()
{
	return atan((im * 180 / M_PI) / re);
}
CComplex::~CComplex()
{
	cout << "destruktor" << endl;
}
