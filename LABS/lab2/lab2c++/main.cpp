#include <iostream>
#include <string>
using namespace std;
const string NAZWA_GRY = "Pogromcy C++";
main()
{
    int a = 40, b, c = 40; // 4 BAJTY
    cout << "a: " << a << "adres: " << &a << "\n";
    cout << "b: " << b << "adres: " << &b << "\n"; //zmienna bez zainicjalizowania!!! mo¿e byæ
// COKOLWIEK
    cout << "c: " << c << "adres: " << &c << "\n";

    short int mniejszy_integer; //-32768 do 32767, 2^(8*2), 2 BAJTY
    float zm_zmiennoprzecinkowa = 4.7; // 38 zer - do +
//int d = zm_zmiennoprzecinkowa;
//cout << d << "\n";
    cout << 5.0 / 2<< "\n";

// 308 zer - do +
    double zm_zmiennoprzecinkowa_o_wiekszej_precyzji; //TAK SIE NIE NAZYWA ZMIENNYCH

    char znak = '4';
    cout << "znak ="<< znak << "\n";

    string tekst = "to jest przykladowy tekst :) ";
    cout << tekst << '\n';
    cout << tekst << endl << endl;

    string imie = "Krzysztof";
    string nazwisko = "Malecki";

    cout << imie << " " << nazwisko << endl << endl;

    string imie_oraz_nazwisko = imie + " " + nazwisko;
    string imie_oraz_nazwisko2 = "Imie: " + imie + '\n' + "Nazwisko: " + nazwisko;

    cout << imie_oraz_nazwisko << endl;
    cout << imie_oraz_nazwisko2 << endl;

    bool wartosc_prawdy_lub_falszu; // false = 0, true = R \ {0}

    cout << wartosc_prawdy_lub_falszu << endl;
    unsigned short int mniejszy_integer2 = 5; //+65535

    cout << NAZWA_GRY << endl;

//NAZWA_GRY = "cos nowego";

    system("pause");
}
