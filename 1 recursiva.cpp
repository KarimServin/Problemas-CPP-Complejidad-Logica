#include <iostream>
using namespace std;

int sumapar(int k);

int main() {
	
	int k=0;
	
	cout<< "Ingrese, por favor, el numero: ";
	cin>> k;
	
	
	
	if(k%2!=0) {
		
		k--;
		
	}
	
	
	return sumapar(k);
}



int sumapar(int k) {
    
	
    if(k==2) {
		
		return 2;
	}
	
	else {
		
		return k+sumapar(k-2);
	
		
	}
	
	
}


