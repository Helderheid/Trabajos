#include "ArrgloDinamicoInt.h"
#include <iostream>
using namespace std;
ArrgloDinamicoInt::ArrgloDinamicoInt(int size, int arr[]){
		this->size = size;
		this->data = new int[size];
		for(int i =0; i<size ;i++){
			data[i]=arr[i];
        }
}

ArrgloDinamicoInt::~ArrgloDinamicoInt(){
    //dtor
}

void ArrgloDinamicoInt::insertar(int elem){

    int *nuevo = new int[size++];

    for(int i=0; i<size-1;i++){
        nuevo[i]=data[i];
    }
    nuevo[size-1]=elem;
    delete []data;
    data = nuevo;
}


void ArrgloDinamicoInt::mostrar(int size,int arr[]){
      for(int i=0;i<size;i++){
      cout << arr[i] <<endl;
    }
}
void ArrgloDinamicoInt::vaciar(int size, int arr[]){
        data=0;
        }


