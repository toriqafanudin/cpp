#include <iostream>

using namespace std;

int main(){
    int a = 6;
    int b = 4;
    int hasil;
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;

    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    hasil = a + b * a;
    cout << a << " + " << b << " * " << a << " = " << hasil << endl;

    cin.get();
    return 0;
}
