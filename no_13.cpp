#include <iostream>

using namespace std;

int main(){
    int gejala;
    cout << "1. Keluhan flu" << endl
         << "2. Keluhan flu dan sakit tenggorokan" << endl
         << "3. Keluhan flu, sakit tenggorokan, batuk-batuk" << endl;
    cout << "Pilih gejala: ";
    cin >> gejala;
    switch(gejala){
    case 1:
        cout << "Saran : Dokter Umum";
        break;
    case 2:
        cout << "Saran : Dokter Spesialis THT";
        break;
    case 3:
        cout << "Saran : Dokter Spesialis Paru";
        break;
    default:
        cout << "Tidak ada saran, pilihan salah";
        break;
    }
}
