#include <iostream>

using namespace std;

bool isRight();

int main()
{
    double liczba;
    do
    {
        cout <<"Podaj liczbê: " << endl;
        cin >> liczba;
    }
    while (!isRight());
    return 0;

}

bool isRight() //definicja funkcji, po main()
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
