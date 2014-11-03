#pragma once
class Complex
{

private :
	double _real;
	double _im;

public:
	Complex(double real, double im);
	double GetReal(void);
	double GetIm(void);

	void SetReal(double);
	void SetIm(double);

	double GetModulus(void);

	~Complex(void);
};

