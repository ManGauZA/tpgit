#include "Complex.h"


Complex::Complex(double real, double im)
{
	_real = real;
	_im = im;

}


Complex::~Complex(void)
{

}


double Complex::GetReal(void)
{
	return _real;

}


double Complex::GetIm(void)
{
	return _im;

}

void Complex::SetReal(double real)
{

	_real = real;

}

void Complex::SetIm(double im)
{

	_real = im;

}