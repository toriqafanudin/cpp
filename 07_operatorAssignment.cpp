#include <iostream>
using namespace std;
int main(){
    int a = 10;
    cout << "a = " << a << endl;
    a += 3;
    cout << "ditambah 3 menjadi " << a << endl;
    a -= 3;
    cout << "dikurang 3 menjadi " << a << endl;
    a /= 3;
    cout << "dibagi 3 menjadi " << a << endl;
    a *= 3;
    cout << "dikali 3 menjadi " << a << endl;
    a %= 4;
    cout << "dimodulo 4 menjadi " << a << endl;
    cin.get();
    return 0;
}
