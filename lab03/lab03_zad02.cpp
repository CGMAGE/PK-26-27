#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n, a, liczba;
    cout << "N: ";
    cin >> n;
    cout << "A: ";
    cin >> a;
    int maks = a;
    
    for (liczba = 1; liczba < n; liczba++){
        cout << "A: ";
        cin >> a;
        if (a > maks)
            maks = a;
    }
    cout << maks;
        
    return 0;
}