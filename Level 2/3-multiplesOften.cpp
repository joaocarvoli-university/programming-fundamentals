#include <iostream>
using namespace std;

/* This program is able to say how multiples each element from a vector has, comparing with the elements from another vector that are the "multiples". The result will be printed in the order in another vector.

Esse programa é capaz de dizer quantos múltiplos cada elemento de um vetor possui, comparando com elementos de outro vetor que seriam os "múltiplos". O resultado será printado em ordem em um outro vetor. */

int eh_multiplo(int a, int b){
    if(a%b != 0) return 0;
    else return 1;
}

int contar_multiplos(int vetor[], int n, int b){
    int contador = 0, aux = 0;
    for(int i = 0; i < n; i++){
        aux = eh_multiplo(vetor[i],b);
        contador += aux;
    }
    return contador;
}

int main(){

    int size1 = 0, size2 =0;
    cin >> size1 >> size2;
    int vet1[size1],vet2[size2];
    int acu = 0, vetfinal[size1];


    for(int i = 0; i < size1; i++) cin >> vet1[i]; 
    for(int i = 0; i < size2; i++) cin >> vet2[i];
    for(int i = 0; i < size1; i++) vetfinal[i] = contar_multiplos(vet2,size2,vet1[i]);
    for(int i = 0; i < size1; i++) cout << vetfinal[i] << " ";
}
