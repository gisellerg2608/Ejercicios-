#include <iostream>
using namespace std;

int main(){
	int i, suma =0;
	for(i=1; i<=100; i++){
		if( i%1==0){
			suma+=i;
			cout <<""	<<i<<endl;	
		}
	}
	cout<< "La suma de los  numeros pares es:" << suma;
}
