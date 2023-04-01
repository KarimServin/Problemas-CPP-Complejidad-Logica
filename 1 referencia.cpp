#include <iostream>
using namespace std;

void masmas(int,int&,int&,int&);

int main() {
	
	int x=0,horas=0,minutos=0,segundos=0;
	cin>> x;
	
	masmas(x,horas,minutos,segundos);
	cout << endl;
	cout << "HORAS " << horas << endl;
	cout << "minutos " << minutos << endl;
	cout << "seg " << segundos << endl;
	return 0;
}


void masmas(int valor,int& horas,int& minutos,int& segundos) {
	
	horas=valor/3600;
	valor%=3600; //EL RESTO, QUE NO ENTRO EN UNA HORA
	minutos=valor/60; //LOS SEGUNDOS QUE NO ENTRARON EN UNA HORA, SE DIVIDEN 
	//PARA SABER CANTIDAD DE MINUTOS QUE ENTRAN
	valor%=60;  // LOS QUE NO ENTRARON EN UN MINUTO DE 60 SEGUNDOS SON SIMPLEMENTE SEGUNDOS
	segundos=valor; 
	
}
