#include <iostream>
using namespace std;
int main(){
	for(int i = 1; i <= 10; i++){
		if(i == 5){
			//continue;
			break;
		}
		cout << i << endl;
	}
	cout << "akhirnya" << endl;
	cin.get();
	return 0;
}
