#include <iostream>
using namespace std;

int suma (int num1, int num2);
int main (){
	float num1, num2;
	cout << "ingrese el primer valor: " << endl;
	cin >> num1;
	cout << "ingrese el segundo valor: " << endl;
	cin >> num2;
	cout << "el resultado de sumar los numero es: " << suma(num1,num2) <<endl; 
	}
	
	int suma(int num1, int num2){
		int resultado;
		resultado = num1 + num2;
		return resultado;
	}
