#include <iostream>

using namespace std;

int main(){
    int i = 114;
    do{
        if(i%3==0 && i%7==0){
            cout << "Kelipatan 3 dan 7 :";
            cout << i << endl;
        }
        i++;
    }while(i>113 && i<1119);
}
