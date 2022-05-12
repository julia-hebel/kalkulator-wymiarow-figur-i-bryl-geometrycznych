#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "Bryla.h"

using namespace std;

Bryla::Bryla()
{
    this->Krawedz_a = 0;
    this->Krawedz_b = 0;
    this->Krawedz_c = 0;
    this->Wysokosc = 0;

    this->PolePowierzchni = 0;
    this->Objetosc = 0;
}

void Bryla::WypiszWymiary()
{
    cout << endl;
    cout << "Pole powierzchni: " << PolePowierzchni << endl;
    cout << "Objetosc: " << Objetosc << endl;
}

void Bryla::Szescian()
{
    cout << "Wybrano szescian" << endl;
    cout << endl;

    cout << "Dlugosc krawedzi szescianu: ";
    cin >> Krawedz_a;

    PolePowierzchni = 6 * Krawedz_a * Krawedz_a;
    Objetosc = pow(Krawedz_a, 3);   // Krawedz_a ^ 3

    WypiszWymiary();
}

void Bryla::Prostopadloscian()
{
    cout << "Wybrano prostopadloscian" << endl;
    cout << endl;

    cout << "Dlugosc pierwszej krawedzi prostopadloscianu: ";
    cin >> Krawedz_a;

    cout << "Dlugosc drugiej krawedzi prostopadloscianu: ";
    cin >> Krawedz_b;

    cout << "Dlugosc trzeciej krawedzi prostopadloscianu: ";
    cin >> Krawedz_c;

    PolePowierzchni = (2 * Krawedz_a * Krawedz_a) + (2 * Krawedz_b * Krawedz_b) + (2 * Krawedz_c * Krawedz_c);
    Objetosc = Krawedz_a * Krawedz_b * Krawedz_c;

    WypiszWymiary();
}

void Bryla::Graniastoslup()
{
    double LiczbaBokow = 0;
    double Promien = 0;

    cout << "Wybrano graniastoslup prawidlowy" << endl;
    cout << endl;

    cout << "Dlugosc boku podstawy graniastoslupa prawidlowego: ";
    cin >> Krawedz_a;

    cout << "Liczba bokow wielokata w podstawie: ";
    cin >> LiczbaBokow;

    cout << "Promien okregu wpisanego w podstawe: ";
    cin >> Promien;

    cout << "Wysokosc graniastoslupa prawidlowego: ";
    cin >> Wysokosc;

    PolePowierzchni = (LiczbaBokow * Krawedz_a * Promien) + (LiczbaBokow * Krawedz_a * Wysokosc);
    Objetosc = LiczbaBokow * Krawedz_a * Promien / 2 * Wysokosc;

    WypiszWymiary();
}

void Bryla::Ostroslup()
{
    double LiczbaBokow = 0;
    double Promien = 0;

    cout << "Wybrano ostroslup prawidlowy" << endl;
    cout << endl;

    cout << "Dlugosc boku podstawy ostroslupa prawidlowego: ";
    cin >> Krawedz_a;

    cout << "Liczba bokow wielokata w podstawie: ";
    cin >> LiczbaBokow;

    cout << "Promien okregu wpisanego w podstawe: ";
    cin >> Promien;

    cout << "Wysokosc ostroslupa prawidlowego: ";
    cin >> Wysokosc;

    PolePowierzchni = (LiczbaBokow * Krawedz_a * Promien / 2) + (LiczbaBokow * Krawedz_a * Wysokosc / 2);
    Objetosc = LiczbaBokow * Krawedz_a * Promien / 2 * Wysokosc / 3;

    WypiszWymiary();
}

void Bryla::Kula()
{
    double Promien = 0;

    cout << "Wybrano kule" << endl;
    cout << endl;

    cout << "Dlugosc promienia kuli: ";
    cin >> Promien;

    PolePowierzchni = 4 * M_PI * Promien * Promien;
    Objetosc = 4 / 3 * M_PI * pow(Promien, 3);

    WypiszWymiary();
}