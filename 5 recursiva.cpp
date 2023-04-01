#include <iostream>
using namespace std;

int cantDigitos(int a);

int main() {
	
	int a=0;
	
	
	cout<< "Ingrese, por favor, el numero: ";
	cin>> a;
	
	if(a==0) {
		//CASO EN EL QUE SE INGRESA CERO, ES UN DIGITO, POR LO TANTO DEVUELVE 1. 
		return 1;
		
	}

	
	
	return cantDigitos(a);
}



int cantDigitos(int a) {
    
	
	if(a==0) {
		
		return 0;
		
	} else {
		
		if(a%2==0) {
		return 1+cantDigitos(a/10);
		
		} else {
			
			return cantDigitos(a/10);
			
		}
	}
	
	

	
}


