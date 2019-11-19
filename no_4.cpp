#include <iostream>

using namespace std;

void cetakHargaTanah(double panjang_x, double lebar_y);

int main(){
    double panjang_x;
    cout << "Masukan X (panjang tanah):";
    cin >> panjang_x;
    double lebar_y;
    cout << "Masukan Y (lebar tanah):";
    cin >> lebar_y;
    cout << endl;
    cout << "Ukuran panjang tanah [X]: " << panjang_x << endl;
    cout << "Ukuran lebar tanah [Y]: " << lebar_y << endl;
    cetakHargaTanah(panjang_x, lebar_y);
}

void cetakHargaTanah(double panjang_x, double lebar_y){
    double hargaJualTanahTetangga = 400 / (2*1);
    double luas = panjang_x * lebar_y;
    cout << "Luas tanah: " << luas << endl;
    cout << "Harga satuan meter persegi: " << hargaJualTanahTetangga << endl;
    cout << "Harga tanah total: " << luas*hargaJualTanahTetangga << endl;
}
