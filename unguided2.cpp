#include <iostream>
using namespace std;

bool is_vokal(char c) {
    char vokal[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 10; i++) {
        if (c == vokal[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    char kalimat[100];
    cout << "Masukkan kalimat: ";
    cin.getline(kalimat, 100);

    int jumlah_vokal = 0;
    for (int i = 0; kalimat[i] != 0; i++) {
        if (is_vokal(kalimat[i])) {
            jumlah_vokal++;
        }
    }

    cout << "\nJumlah huruf vokal pada kalimat: " << jumlah_vokal << endl;
    return 0;
}