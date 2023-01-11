#include <stdio.h>
#include <stdlib.h>

void odwracanie(int a,int* tab)
{
    int* temp=(int*)malloc(sizeof(int)*a);

    for(int i=0;i<a;i++)
    {
        *(temp+i)=*(tab+a-1-i);
    }

    for(int i=0;i<a;i++)
    {
        *(tab+i)=*(temp+i);
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
    printf("przed odwroceniem\n");
    for(int i=0;i<wielkosc;i++)
    {
        printf("%d ",*(tab+i));
    }
    printf("\n");

    odwracanie(wielkosc,tab);
    printf("po odwroceniu\n");
    for(int i=0;i<wielkosc;i++)
    {
        printf("%d ",*(tab+i));
    }
    free(tab);
    return 0;
}
