#include <iostream>
using namespace std;

int main()
{
    int wysokosc;
    
    cout << "Rozmiar: ";
    cin >> wysokosc;

    for (int i=0; i<wysokosc; i++){
        for (int j=0; j<(wysokosc*2)-1; j++)
            if (j>=(wysokosc-1-i) && j<=(wysokosc-1+i))
                cout <<"*";
            else
                cout <<" ";
        cout << endl;
    }

    


    return 0;
}