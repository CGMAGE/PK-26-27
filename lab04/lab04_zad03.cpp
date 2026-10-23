#include <iostream>
using namespace std;

int main()
{
    int predkosc;
    cout << "Predkosc: ";
    cin >> predkosc;
    cout << "Mandat wynosi ";

    switch (predkosc){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            case 10:
            cout << "50 PLN";
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
            cout << "100 PLN";
        case 21:
            cout << "110 PLN";
        case 22:
            cout << "120 PLN";
        case 23:
        case 27:
        case 29:
            cout << "140 PLN";
        case 24:
        case 25:
        case 28:
            cout << "150 PLN";
        case 26:
            cout << "145 PLN";
        default:
            cout << "200 PLN";
    }

    




    return 0;
}