#include <iostream>
using namespace std;

int potencia(int a, int b);

int main() {
	
	int a=0,b=0;
	
	
	cout<< "Ingrese, por favor, los numeros: ";
	cin>> a >> b;
	

	
	
	return potencia(a,b);
}



int potencia(int a,int b) {
    
	
	if(b==0) {
		
		return 1;
		
	} else {
		
		return a*potencia(a,b-1);
		
	}
	
	

	
}


