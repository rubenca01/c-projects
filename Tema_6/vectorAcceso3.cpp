// Fichero: vectorAcceso3.cpp
#include <iostream>
#include <vector>

int main()
{	
	std::vector<double> v(4,0);  // v = (0,0,0,0)
	// Declaraci�n de un iterador para un vector de double
	std::vector<double>::iterator iter;
	// Se hace apuntar el iterador al primer componente del vector
	iter = v.begin();
	// Asignaci�n de valor a los componentes
	*iter = 1;                                   
	*(iter+1) = 3*(*iter);                       
	*(iter+2) = 5*(*(iter+1)) + (*iter);          
	*(iter+3) = 7*(*(iter+2)) + 2*(*(iter+1)) + (*iter);  
	// Lectura del valor de los componentes
	std::cout << "v = ( " << *iter << ", " <<
		*(iter+1) << ", " << *(iter+2) << ", " << 
		*(iter+3) << " )" << std::endl;
	return 0;
}
