#include <iostream>
using namespace std;

void datosCliente();//Prototipo de función
void mostrarDatos(char[][20],char[][15],char[][15],int[]);

int main(){

 cout << "\t\t PROGRAMA DE CARGA DE DATOS";
 cout << "\n\t\t ==========================";
 datosCliente();//Llamada a la funci¢n
 return 0;
}

void datosCliente(){ //implementación de la función 
 char anim[3][15],edad[3][20],altura[3][15];
 int edad[0];
 int f;
 
 for(f = 0; f < 3; f++){
  cout <<"\nIngrese animal: ";
  cin >> apell[f];
  cout << "\nIngrese edad: ";
  cin >> nom[f];
  cout << "\nIngrese altura: ";
  cin >> edad[f];
  cout << "\nIngrese nombre: ";
  cin>>dni[f];
 }
 mostrarDatos(anim,edad,altura,nombre);

}

void mostrarDatos(char anim[][20],char edad[][15],char [][15],int nombre[]){
 cout << "\n\nLos datos ingresados fueron: ";
 int f;
 
 for(f = 0; f < 1; f++){
  cout << "\nanimal: ";
  cout << anima[f];
  cout << "\nedad: ";
  cout << edad[f];
  cout << "\naltura: ";
  cout << altura[f];
  cout << "\nnombre: ";
  cout << nom[f];
 }
}
