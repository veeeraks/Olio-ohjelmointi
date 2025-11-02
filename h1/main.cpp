#include <iomanip> // fixed ja setprecision likulukua varten
#include <iostream>
#include <windows.h> // ääkkösten asetusfunktiot Windows API:sta

using namespace std; // käyttöön std-nimialueen nimet ilman std::

// ääkköset
void setUTF8() {
    SetConsoleOutputCP(CP_UTF8); // tulostus
    SetConsoleCP(CP_UTF8);       // syöttö
}

void calcSum(int, int);
void calcDiv(int, int);
int retSum(int, int);
float retDiv(int, int);

int main() {
    setUTF8();

    int a, b;
    float result;

    cout << "Anna ensimmäinen (a) luku: ";
    cin >> a;
    cout << "Anna toinen (b) luku: ";
    cin >> b;
    calcSum(a, b);
    calcDiv(a, b);
    cout << a << " + " << b << " = " << retSum(a, b) << endl;

    try {
        result = retDiv(a, b);
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

void calcSum(int luku1, int luku2) {
    int summa = luku1 + luku2;
    cout << "Lukujen summa on " << summa << endl;
}

void calcDiv(int luku1, int luku2) {
    if (luku2 == 0) {
        cout << "Jakaja ei saa olla nolla!" << endl;
    } else {
        float osamaara = static_cast<float>(luku1) / luku2; // toinen int luvuista liukuluvuksi
        // fixed ja setprecision, jotta saadaan vastaus kahden desimaalin tarkkuudella
        cout << "Lukujen osamäärä on " << fixed << setprecision(2) << osamaara << endl;
    }
}

int retSum(int luku1, int luku2) {
    return luku1 + luku2;
}

float retDiv(int luku1, int luku2) {
    if (luku2 == 0) {
        throw runtime_error("Jakaja ei saa olla nolla!");
    } else {
        return static_cast<float>(luku1) / luku2;
    }
}
