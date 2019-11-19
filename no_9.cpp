#include <iostream>

using namespace std;

int main(){
    int berat_badan;
    cout << "Masukan berat badan [KG]: ";
    cin >> berat_badan;
    int tinggi_badan;
    cout << "Masukan tinggi badan [meter]: ";
    cin >> tinggi_badan;
    double bmi = berat_badan / (tinggi_badan*tinggi_badan);
    cout << "BMI anda adalah: " << bmi << endl;
    if(bmi>=29){
        cout << "Penyakit obesitas" << endl;
    }else if(bmi>=25){
        cout << "Kelebihan berat badan" << endl;
    }else if(bmi>=18){
        cout << "Berat badan normal" << endl;
    }else{
        cout << "Kategori kurus" << endl;
    }
}
