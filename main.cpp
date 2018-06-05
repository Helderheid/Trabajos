#include <iostream>
#include "ArrgloDinamicoInt.h"
using namespace std;

int main()
{

    int arr[] = {7,6,4,2};
    ArrgloDinamicoInt escalera(4,arr);
    escalera.mostrar();
    escalera.promedio();
    escalera.ordenar();
    escalera.mostrar();


}

