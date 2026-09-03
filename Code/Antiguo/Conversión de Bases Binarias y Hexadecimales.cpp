#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string decimal_a_binario(int decimal){

	string binario = "";
	
	for(int i = 7; i >= 0; i--){
		
		if(decimal >= pow(2,i)){
			binario += "1";
			decimal -= pow(2,i);
		}
		else{
			binario += "0";
		}
		
	}
	
	return binario;
}

int main(){

	int num1, num2;

	cout << "Ingresa no. inicial (0-256): ";
	cin >> num1;

	cout << "Ingresa no. final (0-256): ";
	cin >> num2;

	cout << endl;

	for(int i = num1; i <= num2; i++){

		cout << "dec: " << i;
		cout << " - Bin: " << decimal_a_binario(i);
		cout << " - Hex: " << hex << uppercase << i << dec << endl;

	}

	cin.get();
	cin.get();

return 0;
}