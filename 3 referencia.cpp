#include <iostream>
using namespace std;

void mover(float &posX, float &posY, char direccion, float amplitud);

int main() {
	
	float posX=0,posY=0,amplitud=0;
	char direccion,i='a';
	
	cout << "Ingrese para inicializar posX seguido de posY : " << endl;
	
	cin>> posX >> posY;
	
	while(true) {
		cout << "Usted se encuentra en posX: " << posX << " posY: " << posY << endl; 
		cout << "Ingrese la direccion y amplitud en la que se quiere mover: ";
		cin >> direccion >> amplitud;
		
		
		mover(posX,posY,direccion,amplitud);
		
		cout << "Ahora usted se encuentra en posX: " << posX << " posY: " << posY << endl; 
		
		cout << "Desea salir? Presione y para confirmar. Sino presione cualqueir otra tecla." << endl;
		cin>> i;
		if(i=='y') {break;
		
		}
		if(i!='n') {continue;
		}
		
	}
	
	return 0;
}


void mover(float &posX, float &posY, char direccion, float amplitud) {
	
	switch(direccion) {
	case 'A':  posY+=amplitud; break;
	case 'B':  posX+=amplitud;posY+=amplitud;break;
	case 'C':  posX+=amplitud; break;
	case 'D':  posX+=amplitud; posY-=amplitud; break;
	case 'E':  posY-=amplitud; break;
	case 'F':  posY-=amplitud; posX-=amplitud;break;
	case 'G':  posX-=amplitud;break;
	case 'H':  posX-=amplitud;posY+=amplitud; break;
	default: cout << "No se cual es esa direccion " << endl;
	}
	
	
}


