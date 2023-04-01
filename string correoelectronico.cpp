#include <iostream>

#include <string>
using namespace std;

int main() {
	
	string dominio="",nombre,apellido,completo;
	
	getline(cin,nombre);
	getline(cin,apellido);
	
	char n= nombre[0];
	
	
	completo = n + apellido + dominio;
	
	
	cout << completo;
	
	
	
	return 0;
}

