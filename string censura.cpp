#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	string censurada, frase;
	
	cout << "FRASE : " << endl;
	getline(cin,frase);
	
	int tamanoFrase = frase.size();
	
	cout << "PALABRA CENSURADA: " << endl;
	getline(cin,censurada);
	
	int tamanoCensurada=censurada.size();
	
	
	
	for(int i=0;i<tamanoFrase; i++) {
		
		if (frase.substr(i,tamanoCensurada) == censurada) {
			
			for(int j=0; j<tamanoCensurada; j++) {
				
				frase[i+j] = 'X';
				
			}
			i=i+tamanoCensurada;
		}
		
	}
	
	cout << frase << endl;
	return 0;
}

