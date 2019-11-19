#include <iostream>

using namespace std;

double hitungSelisihBiaya(double biaya_pakai_motor, double biaya_pakai_mobil);

int main(){
    int jarak_tempuh_y;
    cout << "Masukan Y (Jarak Yang Akan Ditempuh):";
    cin >> jarak_tempuh_y;
    double biaya_motor_per_kilometer = 8000/50;
    double biaya_mobil_per_kilometer = 8000/10;
    double biaya_pakai_motor = biaya_motor_per_kilometer*jarak_tempuh_y;
    double biaya_pakai_mobil = biaya_mobil_per_kilometer*jarak_tempuh_y;
    cout << endl;
    cout << "Jarak perjalanan yg hendak ditempuh [Y]: " << jarak_tempuh_y << endl;
    cout << "Biaya tempuh dengan motor: " << biaya_pakai_motor << endl;
    cout << "Biaya tempuh dengan mobil: " << biaya_pakai_mobil << endl;
    double selisih = hitungSelisihBiaya(biaya_pakai_motor, biaya_pakai_mobil);
    cout << "Selisih biaya kelebihan biaya mobil: " << selisih << endl;
}

double hitungSelisihBiaya(double biaya_pakai_motor, double biaya_pakai_mobil){
    return biaya_pakai_mobil - biaya_pakai_motor;
}
