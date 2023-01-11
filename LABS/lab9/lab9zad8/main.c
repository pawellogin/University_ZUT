#include <stdio.h>
#include <stdlib.h>

void zwol(int* tab)
{
    free(tab);
}

int main()
{
    int wielkosc=8;
    int* tab = (int*)malloc(sizeof(int)*wielkosc);
    printf("%p\n",tab+4);
    zwol(tab);
    printf("%p\n",tab+3);
    return 0;
}
