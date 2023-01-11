#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

bool isRight()
{
    if (cin.rdstate())
    {
        cin.clear();
        cin.ignore(1024, '\n');
        system("cls");
        return false;
    }
    return true;
}

float kolo()
{
    float r=0;
    do
    {
        cout<<"podaj promien"<<endl;
        cin>>r;
    }
    while(!isRight());

    return M_PI*r*r;
}

float  kwadrat()
{
    float a=0;
    do
    {
        cout<<"podaj bok"<<endl;
        cin>>a;
    }
    while(!isRight());

    return a*a;
}

float  prostokot()
{
    float a=0,b=0;
    do
    {
        cout<<"podaj bok a"<<endl;
        cin>>a;
        cout<<"podaj bok b"<<endl;
        cin>>b;
    }
    while(!isRight());

    return a*b;
}

float  trojkat()
{
    float a=0,h=0;
    do
    {
        cout<<"podaj podstawe"<<endl;
        cin>>a;
        cout<<"podaj wysokosc"<<endl;
        cin>>h;
    }
    while(!isRight());

    return (a*h)/2;
}

void menu()
{

    printf("1.pole kola\n");
    printf("2.pole kadratu\n");
    printf("3.pole prostokota\n");
    printf("4.pole trojkota\n");
    printf("5.koniec programu\n");

}

int main()
{
    int wybor=0;
    while(wybor!=5)
    {


        do
        {
            menu();
            cout<<"wybierz opcje"<<endl;
            cin>>wybor;
        }
        while(!isRight());
        system("cls");
        switch(wybor)
        {
        case 1:
            cout<<kolo()<<endl;
            break;
        case 2:
            cout<<kwadrat()<<endl;
            break;
        case 3:
            cout<<prostokot()<<endl;
            break;
        case 4:
            cout<<trojkat()<<endl;
            break;
        case 5:
            exit(EXIT_SUCCESS);
        }

    }
    return 0;
}
