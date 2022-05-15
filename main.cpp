/*
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
    *                                                                                                               *
    *                 Tytu³:    "Kalkulator wymiarów figur i bry³ geometrycznych"                                   *
    *                                                                                                               *
    *                 Autor:    Julia Hebel, s184427, 2022                                                          *
    *                                                                                                               *
    *                 Jêzyk:    C++                                                                                 *
    *                                                                                                               *
    *      Pliki kompilacji:    main.cpp  |  FiguraPlaska.cpp  |  Bryla.cpp                                         *
    *                                                                                                               *
    *                   Cel:    Program s³u¿y do obliczania obwodów i pól powierzchni dla figur p³askich            *
    *                           oraz pól powierzchni i objêtoœci dla bry³ przestrzennych.                           *
    *                                                                                                               *
    *      Sposób dzia³ania:    G³ówny interfejs programu przedstawi menu w postaci listy figur i bry³              *
    *                           ponumerowanych rosn¹co liczbami naturalnymi. Program bêdzie oczekiwa³               *
    *                           wpisania numeru wybranej figury b¹dŸ bry³y.                                         *
    *                           Po dokonaniu wyboru program wywo³a odpowiedni¹ funkcjê, w której poprosi            *
    *                           u¿ytkownika o wpisanie wymaganych wymiarów w postaci liczb rzeczywistych,           *
    *                           po czym obliczy wczeœniej wspomniane parametry i wypisze je na ekranie.             *
    *                           Po wypisaniu wartoœci na ekranie program zapyta, jak¹ akcjê powinien                *
    *                           podj¹æ. Do wyboru powrót do menu g³ównego albo wyjœcie z programu.                  *
    *                                                                                                               *
    *     Zmienne wejœciowe:    dla menu g³ównego - liczby ca³kowite jako numer wyboru figury                       *
    *                           dla parametrów figur i bry³ - liczby zmiennoprzecinkowe jako wartoœci               *
    *                           dla wyboru metody obliczania wymiarów - liczby ca³kowite jako numer metody          *
    *                           dla wyboru akcji po obliczeniu - liczby ca³kowite jako numer wyboru akcji           *
    *                                                                                                               *
    *     Zmienne wyjœciowe:    obliczone przez program wymiary - liczby zmiennoprzecinkowe jako wartoœci           *
    *                                                                                                               *
    *    Wa¿niejsze zmienne:    numerFigury - numer wybranej figury                                                 *
    *                           akcja - numer wybranej akcji                                                        *
    *                                                                                                               *
    *           Podprogramy:    metody typu void klasy FiguraPlaska                                                 *
    *                           metody typu void klasy Bryla                                                        *
    *                                                                                                               *
    *                 Uwagi:    brak                                                                                *
    *                                                                                                               *
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*/

#include <iostream>
#include <math.h>
#include <stdlib.h>

#include "FiguraPlaska.h"
#include "Bryla.h"

using namespace std;

int main()
{
    // zmienne funkcji main
    short int numerFigury = 0;
    short int akcja = 0;

    while (numerFigury != 13)
    {
        // menu glowne programu
        cout << "Kalkulator wymiarow figur i bryl geometrycznych" << endl;
        cout << endl;

        cout << "Prosze wybrac numer figury:" << endl;
        cout << endl;

        cout << "1. Kwadrat" << endl;
        cout << "2. Prostokat" << endl;
        cout << "3. Trojkat" << endl;
        cout << "4. Romb" << endl;
        cout << "5. Trapez" << endl;
        cout << "6. Wielokat foremny" << endl;
        cout << "7. Kolo" << endl;
        cout << endl;

        cout << "8. Szescian" << endl;
        cout << "9. Prostopadloscian" << endl;
        cout << "10. Graniastoslup prawidlowy" << endl;
        cout << "11. Ostroslup prawidlowy" << endl;
        cout << "12. Kula" << endl;
        cout << endl;

        cout << "13. Wyjscie z programu" << endl;
        cout << endl;

        cout << "Numer: ";
        cin >> numerFigury;     // numer powinien miescic sie w zakresie 1-13;
                                // dla innych wartosci zostan¹ wykonane instrukcje zapisane
                                //  w default - wypisanie stosownego komunikatu i ponowne wyswietlenie
                                //  petli menu glownego

        system("cls");

        FiguraPlaska figura = FiguraPlaska();
        Bryla bryla = Bryla();

        switch (numerFigury)
        {
            case 1:
                figura.Kwadrat();
                break;
            case 2:
                figura.Prostokat();
                break;
            case 3:
                figura.Trojkat();
                break;
            case 4:
                figura.Romb();
                break;
            case 5:
                figura.Trapez();
                break;
            case 6:
                figura.Wielokat();
                break;
            case 7:
                figura.Kolo();
                break;
            case 8:
                bryla.Szescian();
                break;
            case 9:
                bryla.Prostopadloscian();
                break;
            case 10:
                bryla.Graniastoslup();
                break;
            case 11:
                bryla.Ostroslup();
                break;
            case 12:
                bryla.Kula();
                break;
            case 13:
                exit(0);    // zamkniecie calego programu
            default:
                cout << "!!!   Nie wybrano poprawnego numeru   !!!" << endl;
                cout << endl;
                break;
        }

        // petla powrotu do menu glownego - wykonuje sie tak dlugo, dopoki nie zostanie wybrana
        //  cyfra 1 lub 2 - wtedy nastepuje wyjscie z petli
        if (numerFigury >= 1 && numerFigury <= 12)
        { 
            akcja = 0;
            while (akcja != 1 && akcja != 2)
            {
                cout << endl;
                cout << "Co dalej?" << endl;
                cout << "1. Powrot do menu glownego" << endl;
                cout << "2. Wyjscie z programu" << endl;
                cout << endl;

                cout << "Wybor: ";
                cin >> akcja;

                if (akcja == 1)
                {
                    system("cls");
                }
                else if (akcja == 2)
                {
                    exit(0);    // zamkniecie calego programu
                }
                else
                {
                    cout << endl;
                    cout << "!!!   Nie wybrano poprawnego numeru   !!!" << endl;
                }
            }
        }
    }

    return 0;
}