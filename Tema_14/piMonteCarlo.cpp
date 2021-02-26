// Fichero: piMonteCarlo.cpp
#include<iostream>
#include<iomanip>
#include<list>
#include<algorithm>

const double pi = 3.14159265358979323846;

struct Punto {
	double x;
	double y;
};

bool dentroCirculo(const Punto& pto) {
	return pto.x*pto.x + pto.y*pto.y < 1;
}

int main() {
	// N�mero de puntos
	int nPuntos;
	std::cout << "Numero de puntos: ";
	std::cin >> nPuntos;
	// Generar puntos uniformemente distribuidos
	std::list<Punto> listaPuntos;
	Punto pto;
	for (int i=0; i<nPuntos; i++) {
		pto.x = 2.0*rand()/RAND_MAX - 1;
		pto.y = 2.0*rand()/RAND_MAX - 1;
		listaPuntos.push_back(pto);
	}
	// Declaraci�n lista valores Booleanos
	std::list<bool> listaDentroCirc(nPuntos);
	// Transformaci�n
	transform(listaPuntos.begin(),listaPuntos.end(),
		listaDentroCirc.begin(),dentroCirculo);
	// Contar n�mero de elementos que valen true
	double numTrue = count( listaDentroCirc.begin(),
							listaDentroCirc.end(),true);
	// Estimaci�n del n�mero PI
	double estimacionPi = 4*numTrue/nPuntos;
	// Valor estimado:
	std::cout << "Valor de pi: " << std::setprecision(20) <<
			estimacionPi << '\n' <<
			"Error: " << pi-estimacionPi << "\n";
	return 0;
}


