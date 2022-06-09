#include <stdio.h>
#include <string.h>
#include "boisko.h"


Boisko makeBoisko(const char *nazwa, double powierzchnia, int ileMaLat, bool czyOrlik) {
    Boisko temp;
    strcpy(temp.nazwa,nazwa);
    temp.powierzchnia=powierzchnia;
    temp.ileMaLat=ileMaLat;
    temp.czyOrlik=czyOrlik;
    return temp;
}

Boisko makeBoiskoCopy(const Boisko *boisko) {
    Boisko kopia;
    strcpy(kopia.nazwa, boisko->nazwa);
    kopia.powierzchnia = boisko->powierzchnia;
    kopia.ileMaLat = boisko->ileMaLat;
    kopia.czyOrlik = boisko->czyOrlik;
    return kopia;
}

void show(const Boisko *boisko) {
/* Funkcja powinna wyswietlac dane w nastepujacy sposob

  Nazwa boiska: osiedlowe.
  Powierzchnia: 123.000000 mkw.
  Ile ma lat: 23
  Orlik.

  lub gdy nie jest to orlik:

  Nazwa boiska: RKS Rakow.
  Powierzchnia: 1234.000000.
  Ile ma lat: 100
  Miejskie.
*/

    printf("\nNazwa boiska: %s. \n", boisko->nazwa);
    printf("Powierzchnia: %f mkw.\n", boisko->powierzchnia);
    printf("Ile ma lat: %d", boisko->ileMaLat);

    if(boisko->czyOrlik)
    {
        printf("\nOrlik.");
    }
    else
    {
        printf("\nMiejskie.");
    }

    printf("\n");
}

void postarz(Boisko *boisko, int lata)
{
    boisko->ileMaLat+=lata;
}


