#include "Complexe.h"
#include <iostream>
#include<cmath>
using namespace std;

//Constructeurs
Complexe::Complexe()
{
	this->Re = 0;
	this->Img = 0;
}

Complexe::Complexe(double Re, double Img)
{
	this->Re = Re;
	this->Img = Img;
}




//Operator +
Complexe* Complexe::operator+(const Complexe& Z) const
{
	Complexe* Z1 = new Complexe();
	Z1->Re = this->Re + Z.Re;
	Z1->Img = this->Img + Z.Img;
	return Z1;
}

Complexe* Complexe::operator+(double Z) const
{
	Complexe* Z1 = new Complexe();
	Z1->Re = this->Re + Z;
	Z1->Img = this->Img;
	return Z1;
}

//Operateur -
Complexe* Complexe::operator-(const Complexe& Z) const
{
	Complexe* Z1 = new Complexe();
	Z1->Re = this->Re - Z.Re;
	Z1->Img = this->Img - Z.Img;
	return Z1;
}

Complexe* Complexe::operator-(double Z) const
{
	Complexe* Z1 = new Complexe();
	Z1->Re = this->Re - Z;
	Z1->Img = this->Img;
	return Z1;
}

Complexe Complexe::conjugue() const
{
	return Complexe(this->Re,-this->Img);
}

double Complexe::modul() const
{
	return sqrt(pow(this->Re,2)+pow(this->Img,2));
}

//Operator *

Complexe* Complexe::operator*(const Complexe& Z) const
{
	Complexe* Z1 = new Complexe();
	Z1->Re = this->Re * Z.Re - this->Img * Z.Img;
	Z1->Img = this->Re * Z.Img + this->Img * Z.Re;
	return Z1;
}

Complexe* Complexe::operator*(double Z) const
{
	Complexe* Z1 = new Complexe();
	Z1->Re = this->Re * Z;
	Z1->Img = this->Img * Z;
	return Z1;
}


//Operator /
Complexe* Complexe::operator/(double Z) const
{
	Complexe* Z1 = new Complexe();
	Z1->Re = this->Re / Z;
	Z1->Img = this->Img / Z;
	return Z1;
}



Complexe* Complexe::operator/(const Complexe& Z) const
{
	Complexe* Z1 = new Complexe();
	Complexe Z2;
	Z2= Z.conjugue();//Conjugue
	double deno = (pow(Z.Re, 2) + pow(Z.Img, 2));
	
	Z1 = *this * Z2;
	Z1->Re = Z1->Re / deno;
	Z1->Img = Z1->Img / deno;

	return Z1;
}

bool Complexe::operator==(const Complexe& Z) const
{
	return (this->Re == Z.Re && this->Img == Z.Img);
}




void Complexe::Afficher()const
{
	if (Img >= 0)
		std::cout << Re << " + " << Img << "i" << std::endl;
	else
		std::cout << Re << " - " << -Img << "i" << std::endl;
}

Complexe* operator+(double C, Complexe& Z)
{
	Complexe* Z1= new Complexe();
	Z1->Re = Z.Re + C;
	Z1->Img = Z.Img;
	return Z1;
}
