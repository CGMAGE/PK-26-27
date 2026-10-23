#include <iostream>
using namespace std;

int main()
{
    int podstawa, wykladnik, wynik=1;
    
    cout << "Podstawa: ";
    cin >> podstawa;
    cout << "Wykładnik: ";
    cin >> wykladnik;
    if (wykladnik<0)
        cout << "wykladnik nie moze byc ujemny";
    else
        for (int i=0; i<wykladnik; i++)
            wynik *= podstawa;
    cout << podstawa << "^" << wykladnik << "=" << wynik << endl;

    return 0;
}