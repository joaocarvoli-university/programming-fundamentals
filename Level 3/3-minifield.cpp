#include <iostream>
using namespace std;

/* This game is called minefield. We will use a matrix and chose a position inserting a number of the line and spine. You should print the sum of the cells that are around the chosen position, there are 4, the top, the bottom, the left, and the right side. If around the position has any cell with a value of -1, show it, you lose!

Esse jogo é chamado de campo minado. Nós usaremos uma matriz e vamos escolher uma posição inserindo o número da linha e da coluna. Você dever printar a soma das células que estão ao redor da posição escolhida, são 4, acima, abaixo, a esquerda e a direta. Se ao redor da posição tiver alguma célula com o valor -1, mostre, você perdeu. */ 


int main(){
// MATRIX FOR TEST CASES
/* M = {{-2,1,-2,-2,3,3},{1,3,2,2,-2,2},{1,3,3,1,-1,2},{1,1,1,-1,3,2},{1,3,-2,1,2,3},{3,-1,3,3,1,-1}};
 */	

    int n = 0; // O n será a linha e a coluna da matriz
    cin >> n;
    int matriz[n + 1][n + 1];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin >> matriz[i][j];
    }

    int linha = 0, coluna = 0, soma = 0;
    cin >> linha >> coluna;  // Eu irei procurar essa posição na matriz


    if(matriz[linha][coluna] < 0){
        cout << "Perdeu!";
        return 0;
    }
    else {
        if(((linha >= 0) and (linha < n)) and ((coluna >= 0) and (coluna < n))){

            if((linha > 0)){
                soma += matriz[linha - 1][coluna]; // Elemento acima do selecionado
            }
            if(linha < n - 1){
                soma += matriz[linha + 1][coluna]; // Elemento abaixo do selecionado
            }
            if(coluna > 0){
                soma += matriz[linha][coluna - 1]; // Elemento a esquerda do selecionado
            }
            if(coluna < n - 1){
                soma += matriz[linha][coluna + 1]; // Elemento a direita do selecionado
            }
            soma += matriz[linha][coluna]; // Elemento selecionado 
        }
    }

    cout << soma << endl;

}
