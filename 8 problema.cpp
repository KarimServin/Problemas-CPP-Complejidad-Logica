#include <iostream>
using namespace std;

void quini6(int[],int[],int tam);

int main() {
	
	int v[]={6,2,4,3,5,1},y[]={6,5,4,3,2,1};
	
	quini6(v,y,6);
	
	
	
	return 0;
}

void quini6(int jugados[],int ganador[],int tam) {
	
	int k=0;
	
	for(int i=0; i<tam; i++) {
		
		for(int j=0; j<tam; j++) {
			
			if(jugados[i]==ganador[j]) {
				
				k++;
				break;
			}
			
		}
		
	}
	
	if (k==6) {
		
		cout << "El jugador gano' " << endl;
	}
	
}
