#include <iostream>

using namespace std;

int luas_kotak(int p, int l){
    int luas = p * l;
	return luas;
}

int luas_kotak(int s){
    int luas = s * s;
	return luas;
}

double luas_kotak(double s){
    double luas = s * s;
	return luas;
}

int main(){
	cout << "luas persegi panjang 4 x 6 = " << luas_kotak(4, 6) << endl;
	cout << "luas persegi 2 x 2 = " << luas_kotak(2) << endl;
	cout << "luas persegi double 2.5 x 2.5 = " << luas_kotak(2.5) << endl;
	cin.get();
	return 0;
}
