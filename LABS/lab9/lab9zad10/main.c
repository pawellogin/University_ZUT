#include <stdio.h>
#include <stdlib.h>

float* kopia(int a,float* tab)
{
   float* temp = (float*)malloc(sizeof(float)*a);
   for(int i=0;i<a;i++)
    {
       *(temp+i)=*(tab+i);
    }
   return temp;
}

int main()
{
    int wielkosc=8;
    float* tab = (float*)malloc(sizeof(float)*wielkosc);
    for(int i=0;i<8;i++)
    {
       *(tab+i)=i+1;
    }

    for(int i=0;i<8;i++)
    {
       printf("%.2f\n",*(kopia(wielkosc,tab)+i));
    }
    return 0;
}
