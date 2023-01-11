#include <stdio.h>
#include <stdlib.h>

float srednia(int a,int* tab)
{
    float suma=0;

    for(int i=0;i<a;i++)
    {
        suma+=*(tab+i);
    }
    return suma/a;;
}

int main()
{

    int wielkosc=5;
    int* tab = (int*)malloc(sizeof(int)*wielkosc);

    tab[0]=4;
    tab[1]=4;
    tab[2]=4;
    tab[3]=4;
    tab[4]=5;

    printf("%.2f",srednia(wielkosc,tab));
    free(tab);
    return 0;
}
