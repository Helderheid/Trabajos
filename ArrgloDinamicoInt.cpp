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

void ArrgloDinamicoInt::ordenar(int size, int arr[]){
        int aux=0;
          for(int i=0;i<size;i++){
        for (int j=0; j<size-1; j++){
            if (arr[j]>arr[j+1]){
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
            }
        }
    }
    for(int i=0;i<size;i++){
    cout << arr[i] <<endl;
    }
}


