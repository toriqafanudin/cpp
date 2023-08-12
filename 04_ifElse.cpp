#include <iostream>

using namespace std;
int main(){
    int a;
    cout << "Masukan angka: ";
    cin >> a;
    if (a == 3){
        cout << "Ini adalah 3" << endl;
    }else if (a == 5){
        cout << "Ini adalah 5" << endl;
    }else if (a == 1){
        cout << "Ini adalah 1" << endl;
    }else{
        cout << "Ini bukan 3, 5, atau 1" << endl;
    }
    cout << "Selesai" << endl;
    cin.get();
    return 0;
}
