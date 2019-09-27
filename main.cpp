#include <iostream>

using namespace std;

void imprimir (int arr[],int tam){
    for(int i=0;i< tam ;i++){
        cout << arr[i];
    }
}
void burbuja(int arr[],int tam){
    for (int j=0;j<tam ; j++){
        for(int i=0 ;i< (tam -1);i++ ){
            if (arr[i]> arr[i+1]){
                int a= arr [i];
                arr[i]= arr[i+1];
                arr[i+1]=a;
            }
        }
    }
}
void intercambiar(int & a ,int & b){
    int z=a;
    a=b;
    b=z;
}
void pivote(int arr[],int izquierda , int derecha ){
    int pivote = arr[derecha];
    int i=(izquierda -1);
    for (int j =izquierda; j<=derecha-1 ;j++){
        if(arr[j]<=pivote){
            i=i+1;
            intercambiar(arr[i],arr[j]);
        }
    }
    intercambiar(arr[i+1],arr[derecha]);
    cout << i+1;
}
/*
void quicksort(int arr[],int izquierda ,int derecha){
    if(derecha > izquierda){
        int a = pivote(arr,izquierda,derecha);
        quicksort(arr,izquierda,a-1);
        quicksort(arr,a+1,derecha);
    }
}
*/
void inserccion(int arr[],int tam){
    for(int i=0 ; i<tam ;i++){
        int posicion=i;
        int auxiliar = arr[i] ;

        while((posicion>0)&&(arr[posicion-1]>auxiliar)){
            arr[posicion] = arr[posicion-1];
            posicion=posicion-1;
        }
        arr[posicion] = auxiliar;
    }
}

int main()
{
    int x[]={4,5,8,9,1,3,2};
    imprimir(x,7);
    cout<< endl ;
    burbuja(x,7);
    //imprimir(x,7) ;
    //quicksort(x,4,2);
    //inserccion(x,7);
    cout << endl ;
    imprimir(x,7);
    return 0;
}
