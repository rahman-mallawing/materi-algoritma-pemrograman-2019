#include <iostream>

using namespace std;

int main(){
    int i = 311;
    int jumBilangan = 0;
    while(jumBilangan<10){
        i++;
        if(i%2==0){
            if(i%9==0){
                jumBilangan++;
                cout << jumBilangan << ". Genap kelipatan 2 dan 9: " << i << endl;
            }
        }
    }
}
