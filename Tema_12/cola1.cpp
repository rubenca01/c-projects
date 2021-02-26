// Fichero: cola1.cpp
#include <iostream>
#include <queue>
#include <string>

int main()
{	
	// Declaraci�n de una cola
	std::queue<int> cola;

	// A�adir elementos al final de la cola
	std::cout << "Elementos puestos en la cola:\n";
	for (int i=0; i<10; i++) {
		cola.push(i);            // A�ade elemento a la cola
		int &p = cola.back();    // Referencia al �ltimo elemento
		std::cout << p << " ";   // Escritura en consola
	}
	std::cout << "\nLa cola contiene " << cola.size() << 
		" elementos" << std::endl;
	std::cout << "Elementos extraidos de la cola:\n";
	while (!cola.empty()) {
		int &p = cola.front();  // Referencia al primer elemento
		std::cout << p << " ";  // Escritura en consola
		cola.pop();             // Elimina primer elemento de la cola
	}
	return 0;
}
