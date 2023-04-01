#include <iostream>
#include <string>
using namespace std;

struct Objeto {
	
	string nombre;
	int codigo;
	int precio;
	
	
};

struct Nodo {
	
	Objeto producto;
	Nodo *siguiente;
	
};



void agregarNodoLista(Nodo *&lista,Objeto elProducto);
void recorrerLista(Nodo *lista);

int main() {
	
	Objeto nuevoProducto;
	
	nuevoProducto.codigo=001;
	nuevoProducto.precio=3549;
	nuevoProducto.nombre="Repisa de melamina";
	
	Objeto producto2;
	producto2.codigo=002;
	producto2.precio=999;
	producto2.nombre="Estanteria de fibrofacil";
	
	
	Objeto producto3;
	producto3.codigo=003;
	producto3.precio=1528;
	producto3.nombre="Cubo de pino";
	
	
	Nodo *lista=NULL;
	
	agregarNodoLista(lista,nuevoProducto);
	agregarNodoLista(lista,producto2);
	agregarNodoLista(lista,producto3);
	recorrerLista(lista);
	
	
	return 0;
	
}
void agregarNodoLista(Nodo *&lista,Objeto elProducto) {
	
	
	Nodo *nuevo_nodo= new Nodo();
	
	nuevo_nodo->producto.nombre= elProducto.nombre;
	nuevo_nodo->producto.precio= elProducto.precio;
	nuevo_nodo->producto.codigo= elProducto.codigo;
	
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while(aux1!=NULL) {
		
		aux2=aux1;
		aux1=aux1->siguiente;
		
	} 
	
	if(aux1==lista) {
		
		lista=nuevo_nodo;
		
	} else {
		
		aux2->siguiente=nuevo_nodo;
		
	}
	nuevo_nodo->siguiente=aux1;
	
}

void recorrerLista(Nodo *lista) {
	
	Nodo *aux1=lista;
	
	while(aux1!=NULL) {
		cout << "Nombre: " << aux1->producto.nombre << endl;
		cout << "Codigo: " << aux1->producto.codigo << endl;
		cout << "Precio: $" << aux1->producto.precio << endl;
		
		cout << endl << endl << "Siguiente producto: " << endl;
		aux1=aux1->siguiente;
	
	}
	
	cout << "No hay mas productos que mostrar " << endl;
	
}


