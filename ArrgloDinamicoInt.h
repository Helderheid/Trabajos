#ifndef ARRGLODINAMICOINT_H
#define ARRGLODINAMICOINT_H


class ArrgloDinamicoInt{
 	int size;
	int *data;

	public:
	ArrgloDinamicoInt(int size, int arr[]);
	~ArrgloDinamicoInt();

	void insertar(int elem);
	void mostrar(int size,int arr[]);

	void vaciar(int size, int arr[]);
	void ordenar(int size, int arr[]);
};



#endif // ARRGLODINAMICOINT_H

