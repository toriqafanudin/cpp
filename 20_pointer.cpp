#include <iostream>

using namespace std;

int main(){
	int a = 5;
	
	// Pointer
	int *aPtr = nullptr;
	aPtr = &a;
	
	// int a mempunyai nilai dan address (alamat)
	cout << " nilai dari a: " << a << endl;
	cout << "alamat dari a: " << aPtr << endl;
	
	// deferencing, mengambil data dari sebuah pointer
	a = 10;
	cout << "mengambil nilai dari pointer aPtr: " << *aPtr << endl;
	
	cin.get();
	return 0;
}