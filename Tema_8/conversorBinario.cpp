// Fichero: conversorBinario.cpp
#include<iostream>
#include<string>

// N�mero de bits del n�mero binario
const int N = 8;

int main()
{
	// Entrada del n�mero binario
	std::cout << "Introduzca un numero binario de " << N << " bits: ";
	std::string numBin;
	std::cin >> numBin;
	// Comprueba que es un n�mero binario de N bits
	if ( numBin.length()!=N ) {
		std::cout << "ERROR: Numero no valido" << std::endl;
		return 0;
	}
	for (int i=0; i<N; i++) {
		if ( numBin[i]!='0' && numBin[i]!='1' ) {
		std::cout << "ERROR: Numero no valido" << std::endl;
		return 0;
		}
	}
	// Convierte el numero de binario a decimal
	int pesoDigito = 1;
	int numDecimal = 0;
	for (int i=N-1; i>=0; i--) {
		if (numBin[i]=='1')
			numDecimal += pesoDigito;
		pesoDigito *= 2;
	}
	std::cout << "El valor decimal es: " << numDecimal << std::endl;
	return 0;
}
