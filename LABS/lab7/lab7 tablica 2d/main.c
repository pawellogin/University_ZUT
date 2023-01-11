#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w=5;
    int k=7;
    int **tab2d=NULL;
    tab2d=(int**)malloc(w*sizeof(int*));//wiersze


    for(int i=0;i<w;i++)
    {
        tab2d[i]=(int*)malloc(k*sizeof(int));//kolumny
    }

    for(int i=0;i<w;i++)
    {
        for(int j=0;j<k;j++)
        {
            tab2d[i][j]=i+j;
            printf("%4d",tab2d[i][j]);
        }
        printf("\n\n");
    }




    return 0;
}
