#include <iostream>
using namespace std;

int cantDigitos(int a);

int main() {
	
	int a=0;
	
	
	cout<< "Ingrese, por favor, el numero: ";
	cin>> a;
	
	if(a==0) {
		
		return 1;
		
	}

	
	
	return cantDigitos(a);
}



int cantDigitos(int a) {
    
	
	if(a==0) {
		
		return 0;
		
	} else {
		
		return 1+cantDigitos(a/10);
		
	}
	
	

	
}


