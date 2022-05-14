
# Kalkulator wymiarów figur i brył geometrycznych

## O projekcie

Celem programu jest obliczanie obwodów i pól powierzchni dla figur płaskich oraz pól 
powierzchni i objętości dla brył przestrzennych.
Program został stworzony na potrzeby projektu z Technik Programowania dla 2 semestru 
kierunku informatyka niestacjonarna na Politechnice Gdańskiej.

### Języki programowania

* C++

Program został napisany w środowisku programistycznym Visual Studio 2019 i jest przystosowany
do uruchamiania na systemie operacyjnym Microsoft Windows.

## Zaczynamy!

### Klonowanie repozytorium

```sh
git clone https://github.com/julia-hebel/kalkulator-wymiarow-figur-i-bryl-geometrycznych.git
```

### Uruchamianie programu

Należy skompilować plik main.cpp, który zawiera w sobie funkcję main. Kompilacja może być
wywołana z poziomu interfejsu środowiska developerskiego, bądź z poziomu terminala.

* [Jak skompilować projekt C++ z poziomu terminala w Windows](https://stackoverflow.com/questions/11365850/run-c-in-command-prompt-windows) [ENG]

## Używanie programu

Główny interfejs programu przedstawi użytkownikowi menu w postaci listy figur i brył ponumerowanych rosnąco liczbami naturalnymi. Program będzie oczekiwał wpisania numeru wybranej figury bądź bryły.

```sh
Kalkulator wymiarow figur i bryl geometrycznych

Prosze wybrac numer figury:

1. Kwadrat
2. Prostokat
3. Trojkat
4. Romb
5. Trapez
6. Wielokat foremny
7. Kolo

8. Szescian
9. Prostopadloscian
10. Graniastoslup prawidlowy
11. Ostroslup prawidlowy
12. Kula

13. Wyjscie z programu

Numer: __
```

Po dokonaniu wyboru program wywoła odpowiednią funkcję, w której poprosi użytkownika o wpisanie wymaganych wymiarów w postaci liczb rzeczywistych, po czym obliczy wcześniej wspomniane parametry i wypisze je na ekranie. 

```sh
Wybrano kwadrat

Dlugosc boku kwadratu: __
```

Po każdej dokonanej kalkulacji użytkownik będzie miał możliwość powrotu do menu głównego albo wyjścia z programu za pomocą wyboru indeksu danej opcji, podobnie jak w przypadku menu głównego. 

```sh
Obwod: 20
Pole: 25

Co dalej?
1. Powrot do menu glownego
2. Wyjscie z programu

Wybor: __
```

## Licencja

Program o otwartym kodzie źródłowym na licencji MIT 

* [The MIT License ](https://opensource.org/licenses/mit-license.php)

## Kontakt

Julia Hebel - s184427@student.pg.edu.pl
