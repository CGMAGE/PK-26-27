#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    char type;
        float temp, tf, tc, tk;
        cout << fixed << setprecision(2);
        cout << "Jesdnostka: ";
        cin >> type;
        cout << "temperatura: ";
        cin >> temp;
        if (type == 'F'){
            tf = temp;
            tc = (tf - 32) * 5/9;
            tk = tc + 273.15;
        }else if (type == 'K'){
            tk = temp;
            tc = tk - 273.15;
            tf = tc * 9/5 + 32;
        }else if (type == 'C'){
            tc = temp;
            tf = tc * 9/5 + 32;
            tk = tc + 273.15;
        }else{
            cout << "Nieprawidlowa jednostka";
            return 1;
        }
        
        cout << "F = " << tf << endl;
        cout << "C = " << tc << endl;
        cout << "K = " << tk << endl;

        
    return 0;
}