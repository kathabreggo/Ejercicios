#include <iostream>
using namespace std;

int main ()
{
	cout << "dame el mes: (1, 2,...,12) : ";
	int mes; 
	cin >> mes;
	
	if (mes > 0 && mes < 13)
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
		 mes == 8 || mes == 10 || mes == 12)
		cout << "el mes tiene 31 dias./n";
		else if (mes == 2)
			cout << "el mes tine 28 o 19 dias./n";
		else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 )
			cout << " el mes tine 30 dias ./n";
		else 
			cout <<"!imposible!/n";
	else
		cout << " el valor introdicido no es valido./n";
}
