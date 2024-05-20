#include <iostream>

using namespace std;

void tambah(int* a, int* b, float* hasil) {
    *hasil = *a + *b;
}

void kurang(int* a, int* b, float* hasil) {
    *hasil = *a - *b;
}

void kali(int* a, int* b, float* hasil) {
    *hasil = *a * *b;
}

void bagi(int* a, int* b, float* hasil) {
    if (*b != 0) {
        *hasil = static_cast<float>(*a) / *b;
    } else {
        cout << "Tidak dapat dibagi 0!" << endl;
    }
}

int main() {
    int no1, no2;
    float hasil;
    char symbol;

    cout << "Masukkan dua angka: ";
    cin >> no1 >> no2;
    
    cout << "Masukkan operasi (+, -, *, /): ";
    cin >> symbol;

    switch (symbol) {
        case '+':
            tambah(&no1, &no2, &hasil);
            cout << "Hasil: " << hasil << endl;
            break;
        case '-':
            kurang(&no1, &no2, &hasil);
            cout << "Hasil: " << hasil << endl;
            break;
        case '*':
            kali(&no1, &no2, &hasil);
            cout << "Hasil: " << hasil << endl;
            break;
        case '/':
            bagi(&no1, &no2, &hasil);
            if (no2 != 0) {
                cout << "Hasil: " << hasil << endl;
            }
            break;
        default:
            cout << "Operasi tidak valid!" << endl;
            break;
    }

    return 0;
}
