#include <iostream>
using namespace std;



int main(int argc, char *argv[]) {

	int contaespacios=0;
	
	string frase;
	
	
	getline(cin,frase);
	
	int j=frase.size();
	
	for(int i=0; i<j; i++) {
		
		if (frase[i]==' ') {
			
			contaespacios++;
		}
		
		
	}
	
	cout << "CARACTERES: " << frase.size() << endl;
	cout << "PALABRAS: " << contaespacios+1 << endl;
	
	return 0;
}

