#include <stdio.h>
#include <stdlib.h>

void zamiana(int a,int* tab1,int* tab2)
{
    for(int i=0;i<a;i++)
    {
        *(tab2+i)=*(tab1+i);
    }
}

int main()
{

    int wielkosc=5;
    int* tab1 = (int*)malloc(sizeof(int)*wielkosc);
    int* tab2 = (int*)malloc(sizeof(int)*wielkosc);

        for(int i=0;i<wielkosc;i++)
        {
            *(tab1+i)=i+1;
        }

        for(int i=0;i<wielkosc;i++)
        {
            *(tab2+i)=0;
        }
    printf("przed zamiana ");
    for(int i=0;i<wielkosc;i++)
    {
        printf("%d ",*(tab2+i));
    }
    printf("\n");
    zamiana(wielkosc,tab1,tab2);

    printf("po zamiana ");
    for(int i=0;i<wielkosc;i++)
    {
        printf("%d ",*(tab2+i));
    }


    free(tab1);
    free(tab2);
    return 0;
}
