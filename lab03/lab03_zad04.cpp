#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n, a, silnia = 1;
    cout << "N: ";
    cin >> n;
    if (n < 0)
        cout << "N musi byc nieujemne";
    else{
        while (n > 0){
            silnia *= n;
            n--;
        }
        cout << silnia;
    }
    

    return 0;
}