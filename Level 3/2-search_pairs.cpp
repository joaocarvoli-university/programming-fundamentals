#include <iostream>
using namespace std;

/* This program creates a function just to select the pairs and put them in another vector.

Esse programa somente cria uma função que seleciona os pares de um vetor e armazena esses pares em um outro vetor. */ 

int buscar_pares(int vetor1[], int vetor2[], int n); // Protótipo da função 1

int main(){
    int num = 0;
    cin >> num;
    int vet[num], vetpar[num];

    for(int i = 0; i < num; i++){
        cin >> vet[i];
        vetpar[i] = 0; // Inicializando o vetor dos pares com zero
    }

    int pares = buscar_pares(vet, vetpar, num);
    for(int i = 0; i < pares; i++) cout << vetpar[i] << " "; // Vetor dos pares
}

// ESSA FUNÇÃO IRÁ RETORNAR A QUANTIDADE DE PARES

int buscar_pares(int vetor1[], int vetor2[], int n){ 
    int count = 0;
    for(int i = 0; i < n; i++){
        if(vetor1[i]%2 == 0) vetor2[count++] = vetor1[i]; // selecionando somente os pares para o vetor 2
    }
    return count;// retornando a quantidade de pares
}

