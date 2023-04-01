#include <iostream>
using namespace std;


int main() {
	
	int V[10], numeroConCifras;
	
    for (int i=0; i<10; i++) {
		
		cin>> V[i];
		
	}
	
	int suma;
	int aux;
	bool k=false;
	while(k==false) {
		cin>> numeroConCifras;
		aux=numeroConCifras;
		suma=0;
		while (numeroConCifras!=0) {
			
		suma=suma+numeroConCifras%10;	
		numeroConCifras=numeroConCifras/10;	
		}
		
		for(int i=0;i<10; i++) {
			
			if (V[i]==suma) {
				cout << "El numero es " << aux << endl;
				k=true; 
				
				
			}
			
		}
	} while(k==false);
	
	
	return 0;
}


	
