#include<iostream>
#include <cmath>
using namespace std;

float pitagoras(float,float);

int main(){
	float cat1,cat2,hipo=0;
	cout<< "ingrese el cateto 1: ";
	cin >> cat1;
	cout << "ingrese el cateto 2: ";
	cin >> cat2;
	hipo = pitagoras(cat1, cat2);
	cout<<"la hipotenusa del triangulo es : ";
	cout << hipo;
	return 0;
}

float pitagoras(float x, float y){
	float result = 0;
	result = sqrt(pow(x,2)+pow(y,2));
	return result;
}
