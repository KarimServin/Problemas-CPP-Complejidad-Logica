#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	
	cout << "nombre del archivo" << endl;
	string palabra;
	
	getline(cin,palabra);
	palabra=palabra+".txt";
	ofstream archivo;
	
	archivo.open(palabra.c_str(),ios::out);
	
	if(archivo.fail()) {
		
		cout << "No se pudo crear o abrir archivo";
		exit(1);
	}
	
	cout << "El archivo se abrio bien";
					
	cout << "que quiere poner?" << endl;
	
	string frase;
	
	getline(cin,frase);
	
	archivo << frase.c_str() << endl;
	
	archivo.close();
	
	
	return 0;
}

