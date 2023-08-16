#include <iostream>
using namespace std;
int main(){
	int a = 0;
	int b = 1;
	int c;
	int n;
	cout << "Masukan jumlah deret: ";
	cin >> n;
	for(int i = 1; i <= n; i++){
		c = a + b;
		cout << c << endl;
		a = b;
		b = c;
	}
	cin.get();
	return 0;
}
