#include <iostream>
using namespace std;
int main(){
    cout << "Loop 1 \n";
    for(int i = 1; i <= 10; i++){
        cout << i << endl;
    }
    cout << "\nLoop 2 \n";
    for(int i = 1; i <= 10; i += 2){
        cout << i << endl;
    }
    cout << "\nLoop 3 \n";
    for(int i = 10; i >= 1; i--){
        cout << i << endl;
    }
    cout << "\nLoop 4 \n";
    int total = 0;
    for(int i = 1; i <= 10; i++){
        total += i;
        cout << i << " || " << total << endl;
    }
    cin.get();
    return 0;
}
