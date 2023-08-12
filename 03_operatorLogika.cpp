#include <iostream>

using namespace std;
int main(){
    int a = 3;
    int b = 2;
    bool hasil;
    hasil = !(a == 3); // not
    cout << hasil << endl;

    hasil = (a == 3) and (b == 2);
    cout << "true and true = " << hasil << endl;
    hasil = (a == 3) and (b == 3);
    cout << "true and false = " << hasil << endl;
    hasil = (a == 2) and (b == 3);
    cout << "false and false = " << hasil << endl;

    hasil = (a == 3) or (b == 2);
    cout << "true or true = " << hasil << endl;
    hasil = (a == 3) or (b == 3);
    cout << "true or false = " << hasil << endl;
    hasil = (a == 2) or (b == 3);
    cout << "false or false = " << hasil << endl;
    cin.get();
    return 0;
}
