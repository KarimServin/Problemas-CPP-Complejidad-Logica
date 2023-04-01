#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void leer(int&, int&);

int main(int argc, char *argv[]) {
	
	int n1=0,n2=0;
	leer(n1,n2);
	
	cout << n1+n2 << endl << (n1+n2)/2 << n1-n2;
	return 0;
}

void leer(int& n1, int& n2) {
	string n4;
	ifstream archivo;
	
	archivo.open("prueba.txt",ios::in);
	
	if(archivo.fail()) {
		
		exit(1);
	}
	
	while(!archivo.eof()) {
		
		getline(archivo,n4);
		
		
		
	}
	
	archivo.close();
}
