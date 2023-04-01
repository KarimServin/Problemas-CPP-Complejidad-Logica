#include <iostream>
using namespace std;
int cantPares(int k);


int main(int argc, char *argv[]) {

	int valor;
	cin>> valor;
	
	
	
	
	return cantPares(valor);
}

int cantPares(int k) {
	
	if(k!=0) {
		
		if(k%2==0) {
			
			
			return 1+cantPares(k/10);
			
			
		} else {
			
			
			return cantPares(k/10);
			
		}
		
	} else {
		
		return 0;
		
	}
	
	
}
