// Fichero: funcStatic.cpp
#include <iostream>
#include <string>
#include <sstream>

std::string func( int n ) {

    // Cuando el argumento es m�ltiplo de 4, la variable est�tica
    // se pone a cero. En caso contrario, se incrementa.
    static int numLlamadas = 0;
	if ( n%4 ) {
		numLlamadas++;
	} else {
	    numLlamadas = 0;
	}

	// Construcci�n del string que devuelve la funci�n
	std::stringstream msg;
	msg << "Valor del parametro " << n << ", "
		<< "Variable estatica "   << numLlamadas;
	return msg.str();
}

int main()
{	
	// Invoca 10 veces la funci�n, 
	// pas�ndole como argumento 0, 1, ..., 9
	// e imprime el string devuelto por la funci�n
	for (int i=0; i<10; i++)
	    std::cout << func(i) << std::endl;
    return 0;
}
