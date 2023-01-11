#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int wybor=1;
    printf("By wyjsc z programu wpisz 0");
    Sleep (2000);
    system("cls");
    while(wybor!=0)
    {
        printf("Podaj dzien tygodnia\n");
        scanf("%d",&wybor);
        switch(wybor)
        {
        case 1:
            printf("poniedzialek\n"); break;

        case 2:
            printf("wtorek\n"); break;

        case 3:
            printf("sroda\n"); break;

        case 4:
            printf("czwartek\n"); break;

        case 5:
            printf("piatek\n"); break;

        case 6:
            printf("sobota\n"); break;

        case 7:
            printf("niedzela\n"); break;


        default :
            printf("Wpisz poprawny dzien tygodnia\n"); break;
        }
        Sleep (2000);
        system("cls");
    }
    return 0;
}
