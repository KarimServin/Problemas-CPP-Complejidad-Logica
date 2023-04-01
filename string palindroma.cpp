#include <iostream>
#include <string>
using namespace std;


int main(int argc, char *argv[]) {
	
	string nombre,nombresinespacios;
	int tam;
	
	getline(cin,nombre);
	
	tam= nombre.size();
	
	
	for(int i=0;i<tam; i++) {
		
		if(nombre[i]!=' ') {
		
			nombresinespacios=nombresinespacios + nombre[i];
		
		} 
		
	}
	
	
	
	int j=(nombresinespacios.size()-1),i=0;
	bool esPalindroma=1;

	while(i<j) {
		
		if(nombresinespacios[i]!=nombresinespacios[j]) {
			
			esPalindroma=0;
			break;
		
		}
		i++;
		j--;
	}
	
	if(esPalindroma) {
		
		cout << "Es palindroma" << endl;
	
	}  else {
		
	    cout << "NO es palindroma" << endl;
		
	}
	return 0;
	
	
	
	
}

