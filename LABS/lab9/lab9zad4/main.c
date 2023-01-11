#include <stdio.h>
#include <stdlib.h>

int naj(int a,int* tab)
{
    int naj=*(tab);

    for(int i=0;i<a;i++)
    {
        if(naj<*(tab+i))
        {
            naj=*(tab+i);
        }
    }
    return naj;
}

int main()
{

    int wielkosc=5;
    int* tab = (int*)malloc(sizeof(int)*wielkosc);

    for(int i=0;i<wielkosc;i++)
        {
            *(tab+i)=i+1;
        }
    //tab[3]=99;

    printf("%d",naj(wielkosc,tab));


    free(tab);
    return 0;
}
