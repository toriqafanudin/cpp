#include <iostream>
using namespace std;

int pangkat(int a){
	int hasil;
	hasil = a * a;
	return hasil;
}

int tambah(int a, int b){
    int hasil;
    hasil = a + b;
    return hasil;
}

// Prototype
void tampilkan(int input);

int main(){
	int a, hasil, b, c, hasil2;
	cout << "Masukan angka: ";
	cin >> a;
	hasil = pangkat(a);
	cout << hasil << endl;
	cout << "Masukan angka1: ";
	cin >> b;
	cout << "Masukan angka2: ";
	cin >> c;
	hasil2 = tambah(b, c);
	tampilkan(hasil2);
	cin.get();
	return 0;
}

void tampilkan(int input){
    cout << "Tampilkan dengan void\n";
    cout << input << endl;
}
