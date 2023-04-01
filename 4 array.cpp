#include <iostream>
using namespace std;

int main() {
	
	
	int letras[28]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	char n;
	
	int f;

	
	while(true) {
		
	   
		
		if(cin >> n) { //SI SE INGRESA UN CARACTER
				
			letras[int(n)-97]++; //
		
			
		} else {break;
		
		}
		
		
	}
	
	for(int i=0; i<28;i++) {
		
		if(letras[i]>0) {
			
			
			cout << char(i+97) << ": "<< letras[i] << endl;
			
			
		}
		
		
	}
	
	
	return 0;
}

