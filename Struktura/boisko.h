#ifndef BOISKO_H
#define BOISKO_H
#include <stdbool.h>
#define MAX_LEN 50

/*
Zdefiniuj stałą MAX_LEN równą 50, a następnie zdefiniuj C-strukturę Boisko o polach nazwa typu char[MAX_LEN-1], powierzchnia typu double,
 ileMaLat typu int oraz czyOrlik typu bool. Zdefiniuj następujące funkcje:
*/

typedef struct Boisko
{
    char nazwa[MAX_LEN - 1];
    double powierzchnia;
    int ileMaLat;
    bool czyOrlik;

} Boisko;

// Tworzy strukturę Boisko
Boisko makeBoisko(const char *nazwa, double powierzchnia, int ileMaLat, bool czyOrlik);

// Tworzy kopię boiska
Boisko makeBoiskoCopy(const Boisko *boisko);

// Postarza dane boisko o zadaną liczbę lat
void postarz(Boisko *boisko, int lata);

// Wyświetla dane boiska
void show(const Boisko *boisko);

#endif
