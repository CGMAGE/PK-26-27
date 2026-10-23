#include <iostream>
using namespace std;

int main()
{
    int rozmiar;
    
    cout << "Rozmiar: ";
    cin >> rozmiar;
    for (int i=0; i<rozmiar; i++){
        for (int j=0; j<rozmiar; j++)
            if ((i+j)%2==0)
                cout << "##";
            else
                cout << "  ";
        cout << endl;
    }

    return 0;
}