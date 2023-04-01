#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	
	int v[5]={0};
	string palabra;
	
	getline(cin,palabra);
	
	
	for(int i=0; i<int(palabra.size()); i++) {
		
		switch(palabra[i]) {
			
		case 'a': 	v[0]++;
		break;
		case 'e':   v[1]++;
		break;
		case 'i':   v[2]++;
		break;
		case 'o':   v[3]++;
		break;
		case 'u':   v[4]++;
		break;
		case 'A': 	v[0]++;
		break;
		case 'E':   v[1]++;
		break;
		case 'I':   v[2]++;
		break;
		case 'O':   v[3]++;
		break;
		case 'U':   v[4]++;
		break;
		default: break;	
		}
		
	}
	

	for(int i=0; i<4; i++) {
		
		
		cout << v[i] << " ";
		
		
	}
	
	cout << v[4];

	return 0;
}

