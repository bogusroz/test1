//strcpyEven

#include <stdio.h>
#include <stdlib.h>

char* strcpyEven(char *t, const char *s);

int main(void)
{
    char *t = (char*)malloc(sizeof(char) * 10);
    char *s = (char*)malloc(sizeof(char) * 10);
    printf("Enter a string: ");
    scanf("%s", s);
    strcpyEven(t, s);
    printf("%s\n", t);
}

char* strcpyEven(char *t, const char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (i % 2 == 0)
        {
            t[i] = s[i];
        }
        i++;
    }
    t[i] = '\0';
    return t;
}





//strncpyEven

#include <stdio.h>
#include <stdlib.h>

// Napisz wskaźnikową wersję funkcji strncpyEven. Funkcja ta ma kopiować n znaków,
// co drugi znak z napisu s do napisu t. Zadbaj o koniec napisu - NUL.
char* strncpyEven(char *t, const char *s, unsigned int n);

int main(void) {
    char *t = malloc(sizeof(char) * 10);
    char *s = "Hello World";
    printf("%s\n", strncpyEven(t, s, 10));
}

char* strncpyEven(char *t, const char *s, unsigned int n)
{
    int i = 0;
    while (i < n)
    {
        if (i % 2 == 0)
        {
            t[i] = s[i];
        }
        i++;
    }
    t[i] = '\0';
    return t;
}