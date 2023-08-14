#include <iostream>

using namespace std;

int main(){
    float a, b, hasil;
    char aritmatika;
    cout << "Selamat datang di program aritmatika" << endl;
    cout << "Masukan angka pertama = ";
    cin >> a;
    cout << "Operator: +, -, *, atau / = ";
    cin >> aritmatika;
    cout << "Masukan angka kedua = ";
    cin >> b;
    cout << a << " " << aritmatika << " " << b << " = ";
    if (aritmatika == '+'){
        hasil = a + b;
    }else if (aritmatika == '-'){
        hasil = a - b;
    }else if (aritmatika == '*'){
        hasil = a * b;
    }else if (aritmatika == '/'){
        hasil = a / b;
    }else{
        cout << "Operator tidak ditemukan" << endl;
        hasil = 0;
    }
    cout << hasil << endl;
    cin.get();
    return 0;
}
