/*********************************************************************

@file main.cpp
@author Kapikowy1
@brief Program obliczający całkę funkcji za pomocą metody prostokątów
Program pozwala użytkownikowi na wprowadzenie początku i końca
przedziału całkowania oraz liczby prostokątów, którymi zostanie
zastąpiona funkcja w trakcie obliczania całki. W rezultacie
program wypisuje wynik całkowania.
@copyright Copyright (c) 20xx Your Name. All rights reserved.
*********************************************************************/

#include <iostream>
#include <cmath>

/**

@brief Funkcja do zintegrowania
Funkcja opisuje zachowanie funkcji, którą chcemy zintegrować.
W tym programie zaimplementowano funkcję kwadratową.
@param x Argument funkcji
@return Wartość funkcji dla argumentu x
*/
double function(double x) {
return x * x;
}
/**

@brief Funkcja obliczająca całkę za pomocą metody prostokątów
Funkcja bierze jako argumenty początek i koniec przedziału
całkowania oraz liczbę prostokątów i zwraca wynik
całkowania. W obliczeniach używana jest funkcja @ref function.
@param a Początek przedziału całkowania
@param b Koniec przedziału całkowania
@param n Liczba prostokątów
@return Wynik całkowania
*/
double integrate(double a, double b, int n) {
double h = (b - a) / n;
double sum = 0.0;
for (int i = 0; i < n; ++i) {
sum += function(a + i * h) * h;
}
return sum;
}
/**

@brief Funkcja główna
Funkcja wczytuje od użytkownika początek i koniec przedziału
całkowania oraz liczbę prostokątów. Następnie wywołuje funkcję
@ref integrate i wypisuje wynik całkowania na standardowe wyjście.
@return Zawsze zwraca 0
*/
int main() {
    double a, b;
    int n;
    std::cout << "Podaj początek przedziału: ";
    std::cin >> a;
    std::cout << "Podaj koniec przedziału: ";
    std::cin >> b;
    std::cout << "Podaj liczbę prostokątów: ";
    std::cin >> n;
    double result = integrate(a, b, n);
    std::cout << "Wynik całkowania: " << result << std::endl;
    return 0;
}