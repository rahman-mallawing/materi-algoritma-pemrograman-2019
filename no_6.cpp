#include <iostream>

using namespace std;

void cetakHargaDanKomisi(int jumlah_ayam_potong, int jumlah_ayam_kampung);

int main(){
    int jumlah_ayam_potong;
    cout << "Masukan X (jumlah ayam potong):";
    cin >> jumlah_ayam_potong;
    int jumlah_ayam_kampung;
    cout << "Masukan Y (jumlah ayam kampung):";
    cin >> jumlah_ayam_kampung;
    cout << endl;
    cout << "Banyaknya ayam potong laku [X]: " << jumlah_ayam_potong << endl;
    cout << "Banyaknya ayam kampung laku [Y]: " << jumlah_ayam_kampung << endl;
    cetakHargaDanKomisi(jumlah_ayam_potong, jumlah_ayam_kampung);
}

void cetakHargaDanKomisi(int jumlah_ayam_potong, int jumlah_ayam_kampung){
    double komisi_ayam_potong = jumlah_ayam_potong * 5000;
    double komisi_ayam_kampung = jumlah_ayam_kampung * 7000;
    cout << "Besar komisi ayam potong: " << komisi_ayam_potong << endl;
    cout << "Besar komisi ayam kampung: " << komisi_ayam_kampung << endl;
    cout << "Komisi total: " << komisi_ayam_potong+komisi_ayam_kampung << endl;
}
