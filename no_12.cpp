#include <iostream>

using namespace std;

double hitungHarga(double harga_sekarang, int jum_tahun);

int main(){
    int tahun_sekarang = 2019;
    int jum_tahun;
    double harga_sekarang;
    cout << "Masukan Y (harga jagung sekarang):";
    cin >> harga_sekarang;
    cout << "Masukan X (jumlah berapa tahun ke depan):";
    cin >> jum_tahun;
    cout << endl;
    cout << "Harga jagung tahun sekarang [2019]: " << harga_sekarang << endl;
    double harga_setelahnya = hitungHarga(harga_sekarang, jum_tahun);
    cout << "Harga jagung setelah " << jum_tahun << " tahun ["
         << jum_tahun+2019 << "]: " << harga_setelahnya << endl;
}

double hitungHarga(double harga_sekarang, int jum_tahun){
    double inflasi = 0.02;
    if(jum_tahun==1){
        return harga_sekarang + (harga_sekarang*inflasi);
    }else{
        return (hitungHarga(harga_sekarang, jum_tahun-1)) + (hitungHarga(harga_sekarang, jum_tahun-1)*inflasi);
    }
}
