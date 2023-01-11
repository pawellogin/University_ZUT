#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0;
    cout<<"podaj a potem b"<<endl;
    cin>>a>>b;
    if(a>b)
        cout<<"a jest wieksze od b"<<endl;
    else if(a==b)
        cout<<"a jest rowne b"<<endl;
    else
        cout<<"b jest wieksze od a"<<endl;
    return 0;
}
