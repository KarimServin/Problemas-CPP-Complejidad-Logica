#include <iostream>
#include <string>
using namespace std;

struct INF {
	
	string nombre;
	string apellido;
	char sexo;
	
};


struct INSCRIPCION {
	
	INF info;
	INSCRIPCION *siguiente;
	
	
	
};


void agregarInscripcion(INSCRIPCION **lista, INSCRIPCION *nuevo);
void recorrerLista(INSCRIPCION *lista);
int main(int argc, char *argv[]) {

	INSCRIPCION **lista=NULL;
	
	INSCRIPCION **nodo= new INSCRIPCION();
	INSCRIPCION **nodo2= new INSCRIPCION();
	
	nodo->info.nombre="Karim";
	nodo->info.apellido="servin";
	nodo->info.sexo='m';
	nodo->siguiente=NULL;
	
	nodo2->info.nombre="marc";
	nodo2->info.apellido="servin";
	nodo2->info.sexo='m';
	nodo2->siguiente=NULL;
	
	
	
 agregarInscripcion(lista,nodo);
 agregarInscripcion(lista,nodo2);
 
 recorrerLista(lista);
 
 
	
	
	return 0;
}


void agregarInscripcion(INSCRIPCION **lista, INSCRIPCION *nuevo) {
	
	
	INSCRIPCION *aux1=lista;
	INSCRIPCION *aux2;
	
	while(aux1!=NULL) {
		
		aux2=aux1;
		aux1=aux1->siguiente;
		
	}
	
	if(aux1==lista) {
		
		lista=nuevo;
		
	} else {
		
		aux2->siguiente=nuevo;
		
	}
	
	nuevo->siguiente=aux1;
	
	
}



void recorrerLista(INSCRIPCION *lista) {
	
	 INSCRIPCION *aux=lista;
	
	
	while(aux!=NULL) {
		
		cout << aux->info.nombre << " -> " << endl;
		aux=aux->siguiente;
	}
	
	
}
