#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
   float a=0,b=0;
   int wybor=5;
   while(1){
   printf("Podaj 2 liczby\n");
   scanf("%f%f",&a,&b);
   printf("  KALKULOTR\n");
   printf("Wybierz dzialanie\n");
   printf("1.Dodawania\n");
   printf("2.Odejmowanie\n");
   printf("3.Mnozenie\n");
   printf("4.Dzielenie\n");
   printf("0.Zamknij program\n");
   scanf("%d",&wybor);
   switch(wybor)
   {
       case 1 : {printf("wynik = %.2f\n",a+b);
       break;}

       case 2 : {printf("wynik = %.2f\n",a-b);
       break;}

       case 3 : {printf("wynik = %.2f\n",a*b);
       break;}

       case 4 : {printf("wynik = %.2f\n",a/b);
       break;}

       case 0 : {return 0;
       break;}

       default : {printf("wbyrales zla opcje\n");}

   }
   sleep(3);
   system("cls");
   }
    return 0;
}
