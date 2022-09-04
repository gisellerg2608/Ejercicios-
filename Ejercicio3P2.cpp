#include <iostream>
using namespace std;

string positivoNegativo(int num);
int main(){
	int numero;
	string cadena;
	cout <<"Ingresar un numero: ";
	cin >> numero;
	cadena = positivoNegativo(numero);
	cout << "El numero es:	" << cadena;
	return 0;
}

string positivoNegativo(int num){
	string resultado;
	if (num>0){
		resultado = "El numero ingresado es positivo";
	}else if (num<0);{
				resultado = "El numero ingresado es negativo";

	}
		return resultado;
	}

