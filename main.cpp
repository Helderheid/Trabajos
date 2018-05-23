#include <iostream>
#include "ArrgloDinamicoInt.h"
using namespace std;

int main()
{
    int aux=0;
    int arr[] = {7,6,4,2};
    ArrgloDinamicoInt(4,arr);



    ArrgloDinamicoInt.vaciar();


    cout<<ArrgloDinamicoInt<<endl;





/*

    for(int i=0;i<4;i++){
        for (int j=0; j<4-1; j++){
            if (arr[j]>arr[j+1]){
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
            }
        }
    }
    for(int i=0;i<4;i++){
    cout << arr[i] <<endl;
    }
*/
}
