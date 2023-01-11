#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mniej=0;
    int wiecej=0;
    int tab[5][4]=
    {
        {-10,2,3,4},
        {-100,-5,12,22},
        {-2,33,21,1},
        {2,4,70,2},
        {8,7,3,100}
    };
    mniej=tab[0][0];
    wiecej=tab[0][0];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(mniej>tab[i][j])
            {
                mniej=tab[i][j];
            }

            if(wiecej<tab[i][j])
            {
                wiecej=tab[i][j];
            }
        }
    }
    printf("%d",wiecej-mniej);
    return 0;
}
