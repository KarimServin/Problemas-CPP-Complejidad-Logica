#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
	
	string nombre;
	
	getline(cin,nombre);
	
	int k = nombre[0];
	
	
	
	
	if (nombre.size()==8  and k<=122 and 65<=k) {
		
		return 1;
		
	} else {
		
		return 0;
	}

}

