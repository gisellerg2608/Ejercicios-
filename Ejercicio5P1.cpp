#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int numeros[]= {1,2};
	float primero=1;
	float segundo=1;
	int suma=0;
	int resta=0;
	int multiplicacion=0;
	int division=0;
	cout << "Ingrese el primero numero: ";
	cin >>  primer;
	cout << "Ingrese el segundo nunero: ";
	cin >> segundo;
	
	for (int i=0;i<2; i++){
		suma += numeros [i];
		resta -= numeros [i];
		multiplicacion *= numeros [i];
		division /= numeros [i;
	}
	
	cout<< "La suma de los numeros es: "<<suma<<endl;
	cout<< "La resta de los numeros es: "<<resta<<endl;
	cout<< "La multiplicacion de los numeros es: "<<multiplicacion<<endl;
	cout<< "La division de los numeros es:"<<division<<endl;
	
	getch();
	return 0;
	
}


