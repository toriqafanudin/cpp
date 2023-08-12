#include <iostream>

using namespace std;

int main(){
    int a = 2;
    int b = 2;
    int c = 3;
    bool hasil1, hasil2;

    cout << (a == b) << endl;
    cout << (a == c) << endl;
    cout << (a != c) << endl;

    hasil1 = (a > b);
    cout << hasil1 << endl;
    hasil2 = (a <= c);
    cout << hasil2 << endl;

    cin.get();
    return 0;
}
