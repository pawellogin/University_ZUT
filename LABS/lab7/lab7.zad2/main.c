#include <stdio.h>
#include <stdlib.h>

int * mniejsza(int* a,int* b)
{
    if(*a<=*b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a=9,b=7;
    int * wynik;
    int* pa=&a;
    int* pb=&b;
    printf("a = %p \nb = %p\n",pa,pb);
    wynik=mniejsza(pa,pb);
    printf("wynik = %p",wynik);
    return 0;
}
