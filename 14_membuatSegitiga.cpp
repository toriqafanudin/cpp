#include <iostream>
using namespace std;
int main(){
    char a = '*';
    int n;
    cout << "Masukan angka: ";
    cin >> n;
	for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << a;
        }
        cout << " " << endl;
	}
	cin.get();
	return 0;
}
