#pragma once

class Bryla
{
private:
	double Krawedz_a;
	double Krawedz_b;
	double Krawedz_c;
	double Wysokosc;

	double PolePowierzchni;
	double Objetosc;

	void WypiszWymiary();

public:
	Bryla();
	void Szescian();
	void Prostopadloscian();
	void Graniastoslup();
	void Ostroslup();
	void Kula();
};