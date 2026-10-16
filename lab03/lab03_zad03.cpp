#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n, a, suma = 0;
    cout << "N: ";
    cin >> n;

    cout << "A: ";
    cin >> a;
    
    if (n <= 0)
        cout << "N musi byc wieksze niz 0";
    else if (a <= 0)
        cout << "A musi byc wieksze niz 0";
    else{
        for (int i = 0; i < n; i++){
            suma += a;
            a++;
        }
        cout << suma;
    }

    return 0;
}