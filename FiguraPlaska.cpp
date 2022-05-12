#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "FiguraPlaska.h"
#include "Bryla.h"

using namespace std;

FiguraPlaska::FiguraPlaska()
{
    this->Bok_a = 0;
    this->Bok_b = 0;
    this->Bok_c = 0;
    this->Wysokosc = 0;

    this->Obwod = 0;
    this->Pole = 0;
}

// wypisywanie na ekran wartosci obwodu i pola
void FiguraPlaska::WypiszWymiary()
{
    cout << endl;
    cout << "Obwod: " << Obwod << endl;
    cout << "Pole: " << Pole << endl;
}

void FiguraPlaska::Kwadrat()
{
    cout << "Wybrano kwadrat" << endl;
    cout << endl;

    cout << "Dlugosc boku kwadratu: ";
    cin >> Bok_a;

    Obwod = Bok_a * 4;
    Pole = Bok_a * Bok_a;

    WypiszWymiary();
}

void FiguraPlaska::Prostokat()
{
    cout << "Wybrano prostokat" << endl;
    cout << endl;

    cout << "Dlugosc pierwszego boku prostokata: ";
    cin >> Bok_a;

    cout << "Dlugosc drugiego boku prostokata: ";
    cin >> Bok_b;

    Obwod = (2 * Bok_a) + (2 * Bok_b);
    Pole = Bok_a * Bok_b;

    WypiszWymiary();
}

void FiguraPlaska::Trojkat()
{
    short int numerMetody = 0;      // dostepne sa dwie metody obliczania parametrow trojkata

    // petla wyboru metody - wykonuje sie dopoki numer metody jest rozny od 1 lub 2
    // gdy numer metody wyniesie 1 lub 2 wykonywane sa odpowiednie instrukcje i nastepuje
    //  powrot do funkcji main
    while (numerMetody != 1 && numerMetody != 2)
    {
        cout << "Wybrano trojkat" << endl;
        cout << endl;

        cout << "Wybierz metode dla trojkata" << endl;
        cout << endl;

        cout << "1. Klasyczna (podstawa i wysokosc) - tylko pole" << endl;
        cout << "2. Wzor herona (3 boki)" << endl;
        cout << endl;

        cout << "Numer metody: ";
        cin >> numerMetody;

        if (numerMetody == 1)
        {
            cout << "Dlugosc podstawy trojkata: ";
            cin >> Bok_a;

            cout << "Dlugosc wysokosci trojkata: ";
            cin >> Wysokosc;
            cout << endl;

            Pole = Bok_a * Wysokosc / 2;

            cout << "Pole: " << Pole << endl;
        }
        else if (numerMetody == 2)
        {
            cout << "Dlugosc pierwszego boku trojkata: ";
            cin >> Bok_a;

            cout << "Dlugosc drugiego boku trojkata: ";
            cin >> Bok_b;

            cout << "Dlugosc trzeciego boku trojkata: ";
            cin >> Bok_c;

            // sprawdzanie czy z podanych bokow mozna w ogole utworzyc trojkat
            if (Bok_a + Bok_b <= Bok_c || Bok_a + Bok_c <= Bok_b || Bok_b + Bok_c <= Bok_a)     // jesli nie mozna
            {
                system("cls");
                cout << endl;
                cout << "!!! Nie mozna utworzyc poprawnego trojkata z bokow takiej dlugosci !!!" << endl;
                cout << endl;
                Trojkat();
            }
            else    // jesli mozna utworzyc trojkat
            {
                Obwod = Bok_a + Bok_b + Bok_c;
                double p = Obwod / 2;
                Pole = sqrt(p * (p - Bok_a) * (p - Bok_b) * (p - Bok_c));

                WypiszWymiary();
            }
        }
        else
        {
            system("cls");
            cout << endl;
            cout << "!!!   Nie wybrano poprawnego numeru   !!!" << endl;
            cout << endl;
        }
    }
}

void FiguraPlaska::Romb()
{
    short int numerMetody = 0;

    // petla wyboru metody - wykonuje sie dopoki numer metody jest rozny od 1 lub 2
    // gdy numer metody wyniesie 1 lub 2 wykonywane sa odpowiednie instrukcje i nastepuje
    //  powrot do funkcji main
    while (numerMetody != 1 && numerMetody != 2)
    {
        cout << "Wybrano romb" << endl;
        cout << endl;

        cout << "Wybierz metode dla rombu" << endl;
        cout << endl;

        cout << "1. Z dlugosci przekatnych " << endl;
        cout << "2. Z dlugosci boku i wysokosci" << endl;
        cout << endl;

        cout << "Numer metody: ";
        cin >> numerMetody;

        if (numerMetody == 1)
        {
            double Przekatna_e;
            double Przekatna_f;

            cout << "Dlugosc pierwszej przekatnej rombu: ";
            cin >> Przekatna_e;

            cout << "Dlugosc drugiej przekatnej rombu: ";
            cin >> Przekatna_f;
            cout << endl;

            Bok_a = sqrt(Przekatna_e * Przekatna_e + Przekatna_f * Przekatna_f);
            Obwod = 4 * Bok_a;
            Pole = Przekatna_e * Przekatna_f / 2;

            WypiszWymiary();
        }
        else if (numerMetody == 2)
        {
            cout << "Dlugosc boku rombu: ";
            cin >> Bok_a;

            cout << "Dlugosc wysokosci rombu: ";
            cin >> Wysokosc;

            Obwod = 4 * Bok_a;
            Pole = Bok_a * Wysokosc;

            WypiszWymiary();
        }
        else
        {
            system("cls");
            cout << endl;
            cout << "!!!   Nie wybrano poprawnego numeru   !!!" << endl;
        }
    }
}

void FiguraPlaska::Trapez()
{
    cout << "Wybrano trapez" << endl;
    cout << endl;
    
    cout << "Dlugosc pierwszej podstawy trapezu: ";
    cin >> Bok_a;

    cout << "Dlugosc drugiej podstawy trapezu: ";
    cin >> Bok_b;

    cout << "Dlugosc wysokosci trapezu: ";
    cin >> Wysokosc;

    Pole = (Bok_a + Bok_b) * Wysokosc / 2;
    
    cout << endl;
    cout << "Pole: " << Pole << endl;
}

void FiguraPlaska::Wielokat()
{
    double LiczbaBokow = 0;
    double Promien = 0;

    cout << "Wybrano wielokat foremny" << endl;
    cout << endl;

    cout << "Dlugosc boku wielokata foremnego: ";
    cin >> Bok_a;

    cout << "Liczba bokow wielokata: ";
    cin >> LiczbaBokow;

    cout << "Promien okregu wpisanego w wielokat: ";
    cin >> Promien;

    Obwod = LiczbaBokow * Bok_a;
    Pole = LiczbaBokow * Bok_a * Promien / 2;

    WypiszWymiary();
}

void FiguraPlaska::Kolo()
{
    double Promien = 0;

    cout << "Wybrano kolo" << endl;
    cout << endl;

    cout << "Dlugosc promienia kola: ";
    cin >> Promien;

    Obwod = 2 * M_PI * Promien;
    Pole = M_PI * Promien * Promien;

    WypiszWymiary();
}