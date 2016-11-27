#include "iostream"
#include "stdio.h"

class Complex
{
public:
	double real;
	double imaginar;
public:
	void afisare();
	Complex returnSuma(Complex);
	Complex sumaDoi(Complex,Complex);
	Complex(double,double);
	Complex();

};

Complex::Complex() {}

Complex::Complex(double a, double b){
	real=a;
	imaginar=b;
}

void Complex::afisare(){
	printf("%f + i%f\n",real, imaginar);
}

Complex Complex::returnSuma(Complex c){
	Complex result;
	result.real = real + c.real;
	result.imaginar = imaginar + c.imaginar;
	return result;
}

Complex Complex::sumaDoi(Complex a, Complex b){
	Complex result;
	result.real = a.real + b.real;
	result.imaginar = a.imaginar + b.imaginar;

	result.afisare();

	return result;
}

int main(){

	Complex a(2,3);
	Complex b(1,2);



	a.afisare();
	b.afisare();

	Complex suma;
	suma = suma.sumaDoi(a,b);
	suma.afisare();	

	return 0;
}
