#include <iostream>

using namespace std;

double convertDollar(double jumlah_uang);
double convertYen(double jumlah_uang);

int main(){
    double jumlah_uang;
    cout << "Masukan jumlah uang [Rp]:";
    cin >> jumlah_uang;
    double dollar = convertDollar(jumlah_uang);
    double yen = convertYen(jumlah_uang);
    cout << endl;
    cout << "Jumlah uang dalam Rupiah: " << jumlah_uang << endl;
    cout << "Jumlah uang dalam Dollar: " << dollar << endl;
    cout << "Jumlah uang dalam Yen: " << yen << endl;
}

double convertDollar(double jumlah_uang){
    return jumlah_uang/14000;
}
double convertYen(double jumlah_uang){
    return jumlah_uang / 120;
}
