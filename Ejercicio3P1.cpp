#include <iostream>
using namespace std;

int main(){
	float valor;
	int suma=0;
	int promedio;
	for (int i = 1; i <=10;i++){
		cout << "Ingrese el valor: ";
		cin >> valor;
		if (valor =10){
			suma= suma+valor;
		} else{
			promedio= suma/10;
		}
	}
	cout <<" La suma de los valores es: " <<suma << endl;
	cout << "El promedio es: " << promedio << endl;
}

