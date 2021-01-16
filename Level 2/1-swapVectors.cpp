#include <iostream>
using namespace std;

/* This program swap the element even index with the element of odd index nearer, in other words, considering 0 as a pair, the swap will be always with the next number.

Esse programa troca o elemento de índice par com o elemento de índice ímpar mais próximo, ou seja, considerando 0 como par, a troca será sempre de um par com o próximo número. */

int main(){

    int qnt = 0, aux = 0;
    cin >> qnt;
    int vet[qnt];

    for(int i = 0; i < qnt; i++) cin >> vet[i];
    for(int i = 0; i < qnt - 1; i++){
        if(i%2==0){
        aux = vet[i + 1];
        vet[i + 1] = vet[i];
        vet[i] = aux;
        }
    }
    for(int i = 0; i < qnt; i++) cout << vet[i] << " ";
    cout << endl;
}
