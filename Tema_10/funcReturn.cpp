// Fichero: funcReturn.cpp
#include <iostream>


int funcSinReturn(int i) {
/*
 * MAL! 
 * Si la condici�n de la sentencia if es false, la funci�n
 * termina sin sentencia return, con lo cual devuelve basura
 */
    if (i<5 || i>=8) return i;
}


int main()
{	
    for (int i=0; i<10; i++) 
        std::cout << funcSinReturn(i) << "\n";
    return 0;
}
