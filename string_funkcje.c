#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>




size_t strlen(const char* s)
{
    int i = 0;
    while(s[i]!=0)
	{
        i++;
    }
    return i;
}



size_t strlenWsk(const char *s)
{
    int len=0;
    while(*(s++)!='\0')
	{
        len++;
    }
    return len;
}



char *strcpy(char *t,const char *s)
{
    char *tab = t;
    int i =0;
    while(s[i]!=0)
	{
        tab[i] = s[i];
        i++;
    }
    tab[i]='\0';
    printf("%s\n",tab);
    return tab;
}



char *strcpyWsk(char *t,const char *s)
{
    char *p = t;
    while(*s!='\0')
	{
        *(p++) = *(s++);
    }
    return p;
}




char *strncpy(char *t,const char *s,size_t n)
{
    char *p = t;
    int sizeS = strlen(s);
    if(n > sizeS)
	{
        n = sizeS;
    }
    int i = 0;
    while(s[i]!=0 && i<n)
	{
        p[i] = s[i];
        i++;
    }
    if(s[i]=='\0')
	{
        p[i] = '\0';
    }
    return p;
}



char *strncpyWsk(char *t,const char *s,size_t n)
{
    char *p=t;
    int sizeS = strlen(s);
    if(n > sizeS)
	{
        n = sizeS;
    }
    int i=0;
    while(i<n)
	{
        *(p++) = *(s++);
        i++;
    }
    *(p++)='\0';
    return p;
}




char *strcat(char *t,const char *s)
{
    char *p = t;
    int i=0,j=0;
    while(p[i]!='\0')
	{
        i++;
    }
    while(s[j]!='\0')
	{
        p[i] = s[j];
        i++;
        j++;
    }
    p[i] = '\0';
    return p;
}



char *strcatWsk(char *t,const char *s)
{
    char *p = t;

    while(*s!='\0')
	{
        *(p++) = *(s++);
    }
    *p='\0';
    return p;
}



char *strncat(char *t,const char *s,size_t n)
{
    int sizeS = strlen(s);
    if(n>sizeS)
	{
        n = sizeS;
    }
    char *p = t;
    int i = 0,j=0;
    while(p[i]!='\0')
	{
        i++;
    }
    while(j<n)
	{
        p[i] = s[j];
        i++;
        j++;
    }
    p[i] = '\0';
    return p;
}



//Zad 3
bool strend(const char s,const char t)
{
    int sLen = strlen(s);
    int tLen = strlen(t);
    if(sLen < tLen)
	{
        return 0;
    }



    for(int i = sLen-tLen,j=0;i<sLen;i++,j++)
	{
        if(t[j] != s[i])
		{
            return 0;
        }
    }
    return 1;
}



//Zad 5
int strindex(const char *s,const char *t)
{
    int sLen = strlen(s);
    int tLen = strlen(t);
    int idx=-1;
    if(tLen > sLen)
	{
        return idx;
    }
    int i=0,j=0;



}


int main()
{
    char *nap1 = "_+ada a s a";
    char nap2[] = "s a_";
//char *nap3 = malloc((strlen(nap1)+strlen(nap2)*sizeof(char));
//strncpy(nap3,nap1,1);
//strcatWsk(nap2,nap1);
    printf("%d",strend(nap1,nap2));
//printf("%s\n",nap2);
    return 0;
}