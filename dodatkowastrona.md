@page dodatkowa strona  dokumentacji dodatkowa
@tableofcontents

@section sekcja1
Program jest implementacją obliczania całki funkcji za pomocą metody prostokątów. Po uruchomieniu program prosi użytkownika o podanie początku i końca przedziału, na którym chcemy obliczyć całkę, oraz o podanie liczby prostokątów, za pomocą których funkcja zostanie zastąpiona w trakcie obliczania całki.

Następnie program wywołuje funkcję integrate, która przyjmuje jako argumenty początek i koniec przedziału, oraz liczbę prostokątów. Funkcja ta oblicza i zwraca wynik całkowania. W obliczeniach wykorzystywana jest funkcja kwadratowa function, która jest opisana w innym miejscu w kodzie.

Po obliczeniu wyniku, program wypisuje wynik na standardowe wyjście i kończy działanie.