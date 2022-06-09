#include <stdio.h>
#include "boisko.h"
#include <string.h>

bool czyPrawidlowaPowierzchnia (double powierzchnia);
bool czyPrawidlowyWiek (int ileMaLat);

int main(int argc, char *argv[])
{
    // 1) Poproś użytkownika o wpisanie danych. Zabezpiecz dane!  Pierwszy, w pełni potwierdzony, przypadek pojawienia się futbolówki w Polsce
    // miał miejsce w roku 1889. Zakładamy, że powierzchnia powinna być z zakresu od 1300 do 7140 mkw.
    // Napisz odpowiednie funkcje sprawdzające poprawność danych.

    char nazwa[MAX_LEN - 1];
    double powierzchnia;
    int ileMaLat;
    bool wartosc = true;
    bool czyOrlik;

    printf("Wprowadz dane boiska.\n");
    printf("\nCzy to Orlik?\nJesli tak wprowadz 1, jesli nie wprowadz 0: ");   //! dlaczego to psuje dzialanie funkcji ileMaLat i zmienia wiek boiska na 0 ? - jesli jest przed ileMaLat to dziala dobrze i nic nie psuje
    scanf("%d", &czyOrlik);
    printf("Nazwa: ");
    scanf("%s", nazwa);
    printf("Powierzchnia: ");
    scanf("%lf", &powierzchnia);
    printf("Ile ma lat: ");
    scanf("%d", &ileMaLat);

    if (!czyPrawidlowaPowierzchnia(powierzchnia))
    {
        printf("\nPodano zla powierzchnie!\n");
        wartosc = true;
    }

    if (!czyPrawidlowyWiek(ileMaLat))
    {
        printf("\nNieprawidlowy wiek!\n");
        wartosc = true;
    }

    // 2) Zainicjalizuj strukturę o nazwie boisko1 wprowadzonymi danymi.
    Boisko boisko1=makeBoisko(nazwa,powierzchnia,ileMaLat,czyOrlik);

    // 3) Stwórz strukturę o nazwie boisko2 kopiując obiekt boisko1.
    Boisko boisko2=makeBoiskoCopy(&boisko1);

    // 4) Stwórz strukturę o nazwie boisko3 kopiując boisko boisko1.
    Boisko boisko3=makeBoiskoCopy(&boisko1);

    // 5) Zmień nazwę boiska boisko1 na Przy szkole
    strcpy(boisko1.nazwa, "Przy szkole");

    // 6) Zmień nazwę boiska boisko2 na RKS Rakow
    strcpy(boisko2.nazwa, "RKS Rakow");

    // 7) Zmień nazwę boiska boisko3 na Stomil
    strcpy(boisko3.nazwa, "Stomil");

    // 8) Zmień wiek boiska boisko2 na 101 lat
    boisko2.ileMaLat = 101;

    // 9) Zmień czyOrlik boiska boisko3 na true
    boisko3.czyOrlik=true;

    // 10) Postarz boisko boisko1 o 3 lata
    postarz(&boisko1, 3);

    // 11) Wypisz informacje o obiektach boisko1, boisko2, boisko3
    show(&boisko1);
    show(&boisko2);
    show(&boisko3);


    //! 12) stwórz tablicę o nazwie tab trzech boisk
    struct Boisko tab[3];

    //! 13) W pętli for do przechodzenia tablicy zamiast indeksów należy użyć wskaźników,
    //! a każdy operator indeksowania należy zastapić operatorem dereferencji!!
    //! Przejdź tablicę i wypełnij ją boiskami uzywając odpowiedniej funkcji.

//    char *p = tab;
//    char *a = boisko1.nazwa;
//    char *b = boisko2.nazwa;
//    char *c = boisko3.nazwa;
//
//    for (Boisko *p = tab; p < tab + 3; ++p)
//    {
////        *p = makeBoisko(nazwa, powierzchnia, ileMaLat, czyOrlik);
//        *p = makeBoiskoCopy(&boisko1);
//    }

    //! 14) W pętli for do przechodzenia tablicy zamiast indeksów należy użyć wskaźników,
    //! a każdy operator indeksowania należy zastapić operatorem dereferencji!!
    //! Wypisz informacje o wszystkich obiektach typu Boisko znajdujących sie w tablicy tab
//
//    for (Boisko *p = tab; p < tab + 3; ++p)
//    {
//        show(p);
//    }

    return 0;
}


bool czyPrawidlowaPowierzchnia (double powierzchnia)
{
    return powierzchnia >= 1300 && powierzchnia <= 7140;
}

bool czyPrawidlowyWiek (int ileMaLat)
{
    return ileMaLat >=0 && ileMaLat <= 133;
}
