#include <iostream>
using namespace std;

struct Nodo {
	
	int dato;
	Nodo *siguiente;
	
	
};

void insertarDesordenado(Nodo *&lista, int dato);
void recorrerLista(Nodo *lista);

int main(int argc, char *argv[]) {
	
	Nodo *lista=NULL;
	
	insertarDesordenado(lista,4);
	insertarDesordenado(lista,2);
	insertarDesordenado(lista,7);
	insertarDesordenado(lista,27);
	recorrerLista(lista);
	
	
	
	return 0;
}


void insertarDesordenado(Nodo *&lista, int dato) {
	
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato=dato;
	nuevo_nodo->siguiente=NULL;
	
	Nodo *aux=lista;
	Nodo *aux2;
	
	while(aux!=NULL) {
	    	
		aux2=aux;
		aux=aux->siguiente;		
		
	}
	
	if(aux==lista) {
		
		lista=nuevo_nodo;
		
	} else {
		
		aux2->siguiente=nuevo_nodo;
		
	}
	
	nuevo_nodo->siguiente=aux;
	

	
}


void recorrerLista(Nodo *lista) {
	
	Nodo *aux=lista;
	
	
   while(aux!=NULL) {
	   
	   cout << aux->dato << " -> " << endl;
	   aux=aux->siguiente;
   }
	

}



