#include <stdio.h>
#include <stdlib.h>

void lewo(int a,int* tab)
{
    int* temp=(int*)malloc(sizeof(int)*a);

    for(int i=0;i<a;i++)
    {
        *(temp+i)=*(tab+i);
    }

    for(int i=0;i<a;i++)
    {
        if(i==4)
        {
            *(tab+i)=*(temp);
        }
        else
        {
            *(tab+i)=*(temp+i+1);
        }

    }

    free(temp);
}

int main()
{

    int wielkosc=5;
    int* tab = (int*)malloc(sizeof(int)*wielkosc);

    for(int i=0;i<wielkosc;i++)
    {
        *(tab+i)=i+1;
    }

   lewo(wielkosc,tab);

    for(int i=0;i<wielkosc;i++)
    {
        printf("%d ",*(tab+i));
    }

    free(tab);
    return 0;
}
