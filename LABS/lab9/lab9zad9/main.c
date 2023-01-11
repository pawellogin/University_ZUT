#include <stdio.h>
#include <stdlib.h>

int ile_zero=0;

int* zero(int a,int* tab1)
{
     ile_zero=a;
    for(int i=0;i<a;i++)
    {
        if(*(tab1+i)==0)
        {
            ile_zero--;
        }
    }

    int* tab2 = (int*)malloc(sizeof(int)*ile_zero);

    int j=0;
    for(int i=0;i<ile_zero;i++)
    {
        if(*(tab1+j)==0)
        {
          j++;
        }
        *(tab2+i)=*(tab1+j);
        j++;
    }

    return tab2;
}

int main()
{
    int wielkosc=8;
    int* tab1 = (int*)malloc(sizeof(int)*wielkosc);

    for(int i=0;i<wielkosc;i++)
    {
        *(tab1+i)=i;
    }

    //*(tab1+3)=0; //test

    int i=0;
    do
    {
       printf("%d ",*(zero(wielkosc,tab1)+i));
       i++;
    }while(i<ile_zero);
    return 0;
}
