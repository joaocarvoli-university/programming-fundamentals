#include <iostream>
using namespace std;

/* This program uses a STRUCT to store a product from a shopping list of a family. The first input is the number of products, the next inputs are {name, price, amount} of each product and the result will be the sum of expenses.

Este programa usa um STRUCT para armazenar um produto de uma lista de compras de uma família. A primeira entrada é o número de produtos, as próximas entradas são {nome, preço, quantidade} de cada produto e o resultado será a soma das despesas. */ 

typedef struct{ // Criação da Struct
    char Nome[200];
    float Preco = 0;
    int Quantidade = 0;
}Itens; // Nome da struct

float calcular_total_compras(Itens Produto[], int n); // Protótipo da função

int main(){
    int n = 0; 
    cin >> n; // Quantidade de produtos em que cada posição do vetor irá armazenar as informações de um tipo

    Itens *Produto = (Itens *) malloc(n * sizeof(Itens)); // Função para alocação de memória dinâmica
    
    for(int i = 0; i < n; i++){
        cin >> Produto[i].Nome;
        cin >> Produto[i].Preco;
        cin >> Produto[i].Quantidade;
    }
    cout.precision(2);
    cout << fixed;
    cout << calcular_total_compras(Produto, n);

    return 0;
}

float calcular_total_compras(Itens Produto[], int n){
    float total = 0;
    for(int i = 0; i < n; i++){
        total += (Produto[i].Preco * Produto[i].Quantidade);
    }
return total; // Retornando a soma do gasto com os produtos
}
