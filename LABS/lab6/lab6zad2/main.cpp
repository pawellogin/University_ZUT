#include <iostream>

using namespace std;

int main()
{
    char zn;
    do
    {
        cout <<"Naci�nij (T/N/t/n): ";
        cin >> zn;
        cin.ignore(1024, '\n');
    }
    while (zn != 't' && zn != 'T' && zn != 'n' && zn != 'N');
    return 0;
}
