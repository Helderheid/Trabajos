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
	void mostrar();
	void vaciar();
	void ordenar();
	void promedio();
    void eliminarP(int pos);
};



#endif // ARRGLODINAMICOINT_H
