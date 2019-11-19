#include <iostream>

using namespace std;

int main(){
    for(int i=202;i<2001;i++){
        if(i%2==1 && i%3==0){
            cout << i << endl;
        }
    }
}
