#include <iostream>

using namespace std;

int main(){
    int jumBilangan = 0;
    int i = 217;
    while(jumBilangan<=5){
        bool kondisi = (i%2==1) && (i%17==0);
        (kondisi)? (
            jumBilangan++, i++
        ): i++;
        if(kondisi) cout << "Ganjil Kelipatan 17: " << i-1 << endl;
    }
}
