#include <iostream>
using namespace std;

int main() {
    string kandidat[3] = {"kandidat A", "kandidat B", "Kandidat C"};
    int suara[3] = {0, 0, 0};
    int pilihan, jumlahpemilih;

    cout << "===== SISTEM VOTING SEDERHANA =====\n";
    cout << "masukkan jumlah pemilih: ";
    cin >> jumlahpemilih;

    for (int i = 1; i <= jumlahpemilih; i++) {
        cout << "\npemilih ke-" << i << endl;
        cout << "1. " << kandidat[0] << endl;
        cout << "2. " << kandidat[1] << endl;
        cout << "3. " << kandidat[2] << endl;
        cout << "pilih kandidat (1-3): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 3) {
            suara[pilihan - 1]++;
        } else {
            cout << "pilihan tidak valid, suara tidak dihitung.\n";
        }

    }

    cout << "\n===== HASIL VOTING =====\n";
    for (int i = 0; i < 3; i++) {
        cout << kandidat[i] << " : " << suara[i] << "suara\n";
    }

    return 0;
}