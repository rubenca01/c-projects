// Fichero: integODE_main.cpp
#include<iostream>
#include<vector>
#include<cmath>
#include "integODE.h"

const double h    = 0.001; // Paso de integraci�n (Delta t)
const double x0   = 0.01;  // Valor inicial de x
const double t0   = 0;     // Valor inicial de t
const int nPasos  = 20000; // N�mero de pasos de integraci�n

/*
 * Funci�n     f(x,t)
 * de la ecuaci�n diferencial ordinaria
 *     dx/dt = f(x,t)
*/
double f(double x, double t) {
	return cos(x*t)*t-sin(t);
}

int main() {
	// Integraci�n aplicando Euler expl�cito
	std::vector<double> x = 
		integODE::EulerExplicito(f, t0, x0, h, nPasos);
	// Integraci�n aplicando Euler-Richardson
	std::vector<double> x1 = 
		integODE::EulerRichardson(f, t0, x0, h, nPasos);
	// Integraci�n aplicando R-K (4 orden)
	std::vector<double> x2 = 
		integODE::RungeKutta4(f, t0, x0, h, nPasos);
	// Salida de los resultados por consola
	for (int i=0; i<nPasos+1; i+=100)  
		std::cout << "t =" << t0+i*h << "\tx (Euler)= " << x[i] <<
			"\tx (E-R)= " << x1[i] << "\tx (R-K4)= " << x2[i] << std::endl;
	return 0;
}


