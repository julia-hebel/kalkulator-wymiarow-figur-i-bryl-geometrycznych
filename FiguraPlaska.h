#pragma once

class FiguraPlaska
{
private:
    double Bok_a;
    double Bok_b;
    double Bok_c;
    double Wysokosc;

    double Obwod;
    double Pole;

    void WypiszWymiary();

public:
    FiguraPlaska();
    void Kwadrat();
    void Prostokat();
    void Trojkat();
    void Romb();
    void Trapez();
    void Wielokat();
    void Kolo();
};