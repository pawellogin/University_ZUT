#include <stdio.h>
#include <stdlib.h>

void zerowanie(int a,int* tab)
{
    for(int i=0;i<a;i++)
    {
        *(tab+i)=0;
    }
}

int main()
{

    int wielkosc=0;
    scanf("%d",&wielkosc);
    int* tab = (int*)malloc(sizeof(int)*wielkosc);
    zerowanie(wielkosc,tab);

    for(int i=0;i<wielkosc;i++)
    {
        printf("%d ",*(tab+i));
    }
    free(tab);
    return 0;
}
