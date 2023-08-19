#include <iostream>
using namespace std;

int x = 8;

int ambil_global(){
	return x;
}

int x_local(){
	int x = 5;
	return x;
}

int main(){
	cout << "1. variabel global: " << x << endl;
	int x = 7;
	cout << "2. variabel local main: " << x << endl;
	cout << "3. variabel ambil global: " << ambil_global() << endl;
	cout << "4. variabel local main: " << x << endl;
	cout << "5. variabel x_local: " << x_local() << endl;
	cout << "6. variabel local main: " << x << endl;
	{
		cout << "7. variabel local main: " << x << endl;
		int x = 1;
		cout << "8. variabel local block: " << x << endl;
		cout << "9. variabel ambil global: " << ::x << endl;
	}
	cout << "10. variabel local main: " << x << endl;
	cin.get();
	return 0;
}
