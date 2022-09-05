#include <iostream>
#include <stdlib.h>
#include<conio.h>
using namespace std;

main(){
	int cantidad=0; //Almacena la cantidad de entradas compradas
	//Almacena la opcion de menu seleccionada por el usuario
	char opcion= ' ';
	float precio=0, total=0;
	cout<<"\n\t****************************************"<<endl;
	cout<<"\t* BIENVENIDO AL ESTADIO CUSCATLAN *"<<endl;
	cout<<"\n\t****************************************"<<endl;
	cout<<"\n\t* Sectores del estadio *"<<endl;
	cout<<"\n\t*A- Sol general *"<<endl;
	cout<<"\n\t* B- Sol preferente *"<<endl;
	cout<<"\n\t* C- Sombra *"<<endl;
	cout<<"\n\t* D- Tribuna *"<<endl;
	cout<<"\n\t* E- Platea *"<<endl;
	cout<<"\n\t****************************************"<<endl;
	cout<<"\n\t Selecciona la letra del sector del estadio : ";
	opcion=getche(); //Capturamos la seleccion del usuario
	cout<<"\n\t Ingresa la cantidad de entradas requeridad: ";
	cin >>cantidad;
	if(cantidad<1){ //Cantidad de entradas no puede ser menor de 1
	cout <<"/n/t/a ERROR: Cantidad de entradas debe ser mayor que 1" <<endl;
	system("Pause");
	return 0;//Su pone menos de 1 el programa"se cierra"
	}
	system(" cls");
	switch(opcion){
		case 'A': case 'a':
		cout<< "/n/t Sector seleccionado: Sol general"<<endl;
		precio=3;
		break;
		case 'B': case 'b':
		cout<< "/n/t Sector seleccionado: Sol preferente"<<endl;
		precio=5;
		break;
		case 'c': case 'C':
		cout<< "/n/t Sector seleccionado: Sombra"<<endl;
		precio=8;
		break;
		case 'D': case 'd':
		cout<< "/n/t Sector seleccionado: Tribuna"<<endl;
		precio=15;
		break;
		case 'E': case 'e':
		cout<< "/n/t Sector seleccionado: Platea"<<endl;
		precio=20;
		break;
		default:
		cout <<"/n/t/a ERROR: El selector seleccionado no existe" <<endl;
		return 0;//Cerramos el programa
	}
	total=precio*cantidad; //Calculando total a pagar
	cout<< "/n/t Precio unitario: $"<<precio<<endl;
	cout<< "/n/t Cantidad de entradas: $"<<total<<endl;
	cout<< "/t TOTAL A PAGAR: $"<<total<<endl;	
	cout <<"/n/n/t GRACIAS POR VISITARNOS!" <<endl;
	system("Pause");
}
