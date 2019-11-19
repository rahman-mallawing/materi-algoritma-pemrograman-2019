#include <iostream>

using namespace std;

double hitungOngkos(int jumlah_pekerja, double besar_beban_biaya_satu_pekerja);
double hitungLamaKerja(int jumlah_pekerja, double beban_kerja);

int main(){
    int jumlah_pekerja;
    cout << "Masukan jumlah pekerja proyek:";
    cin >> jumlah_pekerja;
    double besar_beban_biaya_satu_pekerja = 100/50;
    double beban_kerja = 100;
    double biaya_total = hitungOngkos(jumlah_pekerja, besar_beban_biaya_satu_pekerja);
    double lama_total_kerja = hitungLamaKerja(jumlah_pekerja, beban_kerja);
    cout << endl;
    cout << "Jumlah pekerja: " << jumlah_pekerja << " Orang" << endl;
    cout << "Biaya satu pekerja: " << besar_beban_biaya_satu_pekerja << " Juta" << endl;
    cout << "Beban kerja: " << beban_kerja << " Satuan" << endl;
    cout << "Biaya total: " << biaya_total << " Juta" << endl;
    cout << "Lama kerja: " << lama_total_kerja << " Minggu" << endl;
}

double hitungOngkos(int jumlah_pekerja, double besar_beban_biaya_satu_pekerja){
    return jumlah_pekerja * besar_beban_biaya_satu_pekerja;
}
double hitungLamaKerja(int jumlah_pekerja, double beban_kerja){
    return beban_kerja / jumlah_pekerja;
}
