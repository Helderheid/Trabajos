#include <iostream>

using namespace std;

char tamanio(char s[]){
    cout<< " TAMANIO "<<endl;
    int tam=0;
    for (int i=0; s[i]!='\0';i++){
        tam++;
    }
    cout<<"el tamanio es: "<<tam<<endl;
}

int invertir(int s[],int lar){
    int c=lar-1;
    int aux=0;
    for (int i=0;i<=lar/2;i++){
        aux=s[i];
        s[i]=s[c];
        s[c]=aux;
        c--;
    }

}

char copiar(char s[], char r[]){
    cout<< " COPIAR "<<endl;
            for(int i=0; s[i]!='\0';i++){
                s[i]=r[i];
            }
            cout<<s<<endl;
            }

char concatenar(char s[], char r[]){
    cout<< " CONCATENAR "<<endl;
    int limit=0;
    while(s[limit]!='\0'){
        limit++;
    }
            for(int i=0; r[i]!='\0';i++){
                s[limit]=r[i];
                limit++;
            }
            cout<<s<<endl;
            }


int suma(int x[],int tam){
    cout<< " SUMA "<<endl;
    int sum=0;
    for(int i=0;i<=tam-1;i++){
        sum = sum + x[i];
    }
    cout<<sum<<endl;
}
int sumit(int x[],int tam){
    if (tam==1){
        return x[0];
    }
    else{
        return x[tam-1]+sumit(x,tam-1);
    }
}

int main()
{

    char arr[]="hello";
    char as[]="world";
    char ann[]="WarZ \0";
    int ls[5]={1,2,3,4,5};
    int entero[6]={1,2,3,4,5,6};




    tamanio(as);
    copiar(arr,as);
    concatenar(arr,ann);

    cout<< " INVERTIR "<<endl;
    invertir(ls,5);
    for (int i=0;i<=4;i++){
        cout<<ls[i];
    }
    cout<<'\n';
    suma(entero,6);
    cout<< " SUMA 2 "<<endl;
    cout<<sumit(entero,6)<<endl;

    return 0;
}
