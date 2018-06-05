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

    for (int j=pos;j<size;j++)
        nuevo[j+1]=data[j];

    delete []data;
    data = nuevo;
}


void ArrgloDinamicoInt::mostrar(){
      for(int i=0;i<size-1;i++){
      cout << data[i]<< ",";
    }
    cout<<data[size-1]<<endl;
}

void ArrgloDinamicoInt::vaciar(){
    int *nuevo = new int[0];
    size=0;
    delete []data;
    data=nuevo;
        }

void ArrgloDinamicoInt::ordenar(){
        int aux=0;
          for(int i=0;i<size;i++){
        for (int j=0; j<size-1; j++){
            if (data[j]>data[j+1]){
                aux=data[j];
                data[j]=data[j+1];
                data[j+1]=aux;
            }
        }
    }
}

void ArrgloDinamicoInt::promedio(){
    double sum=0;
    double prom=0;
    for(int i=0;i<=size-1;i++){
        sum= sum + data[i];
    }
    prom=sum/(size-1);

    cout <<prom <<endl;
}

void ArrgloDinamicoInt::eliminarP(int pos){
    int *nuevo = new int[size];
    for(int i=0; i<pos;i++){
        nuevo[i]=data[i];
    }

    for(int j=pos;j<size-1;j++){
        nuevo[j]=data[j+1];
    }
}

