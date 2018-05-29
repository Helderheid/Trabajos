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
    delete []data;
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


void ArrgloDinamicoInt::insertarP(int elem,int pos){

    int aux =0;
    int *nuevo = new int[size+1];

    for(int i=0; i<pos;i++)
        nuevo[i]=data[i];
        
    nuevo[pos]=elem;
    
    for (int j=pos;j<size,j++)
        nuevo[j+1]=data[j];
    
    delete []data;
    data = nuevo;
}


void ArrgloDinamicoInt::mostrar(int size,int arr[]){
      for(int i=0;i<size;i++){
      cout << arr[i] <<endl;
    }
}
void ArrgloDinamicoInt::vaciar(int size, int arr[]){

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

