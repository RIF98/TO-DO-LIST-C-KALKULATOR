
#include <iostream>
using namespace std;

int main() {
    int angka;
    int sisa;

    cout << "==================================" << endl;
    cout << " APLIKASI BILANGAN GENAP DAN GANJIL" << endl;
    cout << "==================================" << endl;

    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    sisa = angka % 2;

    cout << "\nAngka yang dimasukkan: " << angka << endl;
    cout << "Sisa pembagian dengan 2: " << sisa << endl;

    if (sisa == 0) {
        cout << "Kesimpulan: " << angka
             << " adalah bilangan genap." << endl;
    } else {
        cout << "Kesimpulan: " << angka
             << " adalah bilangan ganjil." << endl;
    }

    cout << "==================================" << endl;
    cout << "          Program selesai         " << endl;
    cout << "==================================" << endl;

    return 0;
}
