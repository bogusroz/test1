#include <stdio.h>
#include <stdlib.h>

// Napisz wskaźnikową wersję funkcji strncpyEven. Funkcja ta ma kopiować n znaków,
// co drugi znak z napisu s do napisu t. Zadbaj o koniec napisu - NUL.
char* strncpyEven(char *t, const char *s, unsigned int n);

int main(void) {
    char *napis = "babacada";
    char napis2[8]; //! musi miec wartosc taka jaka dlugos char *napis ?
    strncpyEven(napis2,napis,6);
    printf("%s",napis2);
}


char* strncpyEven(char *t, const char *s, unsigned n)
{
    char *p=t;
    int i = 0;
    while(n!=i)
	{
    if(i%2!=0)
		{
			*p=*s;
			*p++;
        }

        *s++;
        i++;
    }
    return p;
}


//	  char *napis="testaaa";
//    char napis2[20];
//    char *t = napis2;
//    char *d = napis;
//    while (*d!='\0')
//    {
//        *t=*d;
//        *d++;
//        *t++;
//    }
//    *t='\0';
//    printf("%s", napis2);
//    return 0;
