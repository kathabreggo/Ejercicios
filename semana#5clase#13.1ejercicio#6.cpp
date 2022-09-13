#include <iostream>
using namespace std;

int main(){
	string dia;
	cout << "ingrese un dia de la semana: ";
	cin >> dia;
	if (dia == "sabado" or dia =="Sabado" or dia =="SABADO"){
		cout << "feliz fin de semana" << endl;
	} else if (dia == "domingo" or dia == "Domingo " or dia == "DOMINGO")
		cout << "feliz descanso";
} else {
		cout "Noes un dia valido";
}	
}
