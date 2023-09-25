#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&Pila, int n){
	struct Nodo UltimoNodo = Nodo();
	UltimoNodo.dato = n;
	//verificamos que este no sea el primer nodo, porque si lo es no podemos apuntar a nada 
	if(Pila != nullptr){
		(*Pila).siguiente = &UltimoNodo;
	}
	Pila = &UltimoNodo;
}

void sacarPila(Nodo *&Pila, int &n){
	struct Nodo Aux;
	n = Aux.dato;
	if((Pila-1)==nullptr){
		Pila--;
	}
	
	delete &Aux;
}

int main(){
	
	
	return 0;
}