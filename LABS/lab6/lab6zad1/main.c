#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kolo(int r)
{
   return M_PI*r*r;
}

int kwadrat(int a)
{
    return a*a;
}

int prostokot(int a,int b)
{
    return a*b;
}

int trojkat(int a,int h)
{
    return (a*h)/2;
}

void menu(int wybor)
{
    printf("pole kola\n");
    printf("pole wkadratu\n");
    printf("pole prostokota\n");
    printf("pole trojkota\n");

    switch(wybor)
    {
        case 1:

    }
}

int main()
{
    int wybor=0;
    menu(wybor);
    return 0;
}
