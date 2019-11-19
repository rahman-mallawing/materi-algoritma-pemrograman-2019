#include <iostream>

using namespace std;

int main(){
    int x;
    cout << "Masukan bilangan X: ";
    cin >> x;
    if(x%2==0){
        if(x>=0){
            cout << "GENAP dan POSITIF";
        }else{
            cout << "GENAP dan NEGATIF";
        }
    }else{
        if(x>=0){
            cout << "GANJIL dan POSITIF";
        }else{
            cout << "GANJIL dan NEGATIF";
        }
    }
}
