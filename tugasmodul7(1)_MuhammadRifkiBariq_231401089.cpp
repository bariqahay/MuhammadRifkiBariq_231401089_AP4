#include <iostream>

using namespace std;
int main() {
    int bilg[10];

    
    for (int i = 0; i < 10; i++) {
        bilg[i] = 2 * i + 1;
    }

    for (int i = 0; i < 10; i++) {
        cout << "Bilangan: " << bilg[i] << ", Alamat Memori: " << &bilg[i] << endl;
    }

    return 0;
}
