#ifndef ARRGLODINAMICOINT_H
#define ARRGLODINAMICOINT_H


class ArrgloDinamicoInt{
 	int size;
	int *data;

	public:
	ArrgloDinamicoInt(int size, int arr[]);
	~ArrgloDinamicoInt();

	void insertar(int elem);
	void insertarP(int elem, int pos);
	void mostrar(int size,int arr[]);
	void vaciar();
	void ordenar(int size, int arr[]);
	void promedio(int size, int arr[]);

};



#endif // ARRGLODINAMICOINT_H
