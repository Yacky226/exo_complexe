#pragma once
class Complexe
{
private:
	double Re;
	double Img;
public:
	Complexe(double R=0.0, double I=0.0);
	Complexe* operator+(const Complexe&) const;
	Complexe* operator+(double) const;
	friend Complexe* operator+(double, Complexe&);
	Complexe* operator-(const Complexe&) const;
	Complexe* operator-(double) const;
	Complexe conjugue()const;
	double modul()const;
	Complexe* operator*(const Complexe&) const;
	Complexe* operator*(double) const;
	Complexe* operator/(const Complexe&) const;
	Complexe* operator/(double) const;
	bool operator==( const Complexe&) const;
	void Afficher()const;
};

