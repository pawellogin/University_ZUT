#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tab[10];
    float k=0;
    float suma=0;
    float suma_dod=0;
    float suma_uj=0;
    float suma_k=0;
    float suma_parz=0;
    float suma_idparz=0;

    for(int i=0;i<10;i++)
    {
        scanf("%f",&tab[i]);
    }
    printf("podaj liczbe k");
    scanf("%f",&k);
    for(int i=0;i<10;i++)
    {
        suma+=tab[i];

        if(tab[i]>0)
        {suma_dod+=tab[i];}
        else {suma_uj+=tab[i];}

        if(tab[i]>k)
        {suma_k+=tab[i];}

        if((int)tab[i]%2==0)
        {suma_parz+=tab[i];}
    }
        for(int j=0;j<10;j+=2)
        suma_idparz+=tab[j];

printf("suma wszystkich liczb %.2f\n",suma);
printf("suma liczb dodatnich %.2f\n",suma_dod);
printf("suma liczb ujemncyh %.2f\n",suma_uj);
printf("suma liczb > %.2f %.2f\n",k,suma_k);
printf("suma liczb parzystch %.2f\n",suma_parz);
printf("suma liczb nie parzystch %.2f\n",suma-suma_parz);
printf("suma liczb z id parz %.2f\n",suma_idparz);
printf("suma liczb z id nie parz %.2f\n",suma-suma_idparz);


    return 0;
}
