#pragma once 
#define Fraction_H

class Fraction{

private: int numerator;
		 int denominator; 

public: 
	Fraction();
	~Fraction();
	Fraction(int num, int den);

	int add(); 
	int sub();
	int multiply();
	int divide();
	void print(int num, int den); 

};







