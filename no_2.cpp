#include <iostream>

using namespace std;

void cetakDiskon(double harga, int jumlah);

int main(){
    string barang;
    cout << "Masukan nama brang: ";
    cin >> barang;
    double harga;
    cout << "Masukan harga barang:";
    cin >> harga;
    int jumlah;
    cout << "Masukan jumlah barang yang dibeli:";
    cin >> jumlah;
    cout << endl;
    cout << "Barang: " << barang << endl;
    cetakDiskon(harga, jumlah);
}

void cetakDiskon(double harga, int jumlah){
    double hargaTotal = harga * jumlah;
    double diskonTotal = (harga * jumlah * 5)/100;
    cout << "Harga satuan: " << harga << endl;
    cout << "Jumlah belanja: " << jumlah << endl;
    cout << "Harga total: " << hargaTotal << endl;
    cout << "Diskon total: " << diskonTotal << endl;
    cout << "Sisa bayar: " << hargaTotal-diskonTotal << endl;
}
