#include <iostream>

using namespace std;

double hitungUntung(double jumlah_laku_x, double untung_persen_y);

int main(){
    double untung_persen_y;
    double jumlah_laku_x;
    cout << "Masukan jumlah terjual [KG] - X:";
    cin >> jumlah_laku_x;
    cout << "Masukan persen keuntungan [%] - Y:";
    cin >> untung_persen_y;
    double untung = hitungUntung(jumlah_laku_x, untung_persen_y);
    cout << endl;
    cout << "Jumlah terigu terjual: " << jumlah_laku_x << " KG" << endl;
    cout << "Keuntungan dalam persen: " << untung_persen_y << "%" << endl;
    cout << "Total keuntungan: " << untung << " Rupiah" << endl;
}

double hitungUntung(double jumlah_laku_x, double untung_persen_y){
    double harga_per_kilo = 15000;
    double harga_total = harga_per_kilo * jumlah_laku_x;
    return harga_total*untung_persen_y/100;
}
