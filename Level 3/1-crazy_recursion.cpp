#include <iostream>
using namespace std;

/* This program performs a recursive function following these rules:
The name of the recursive function is CrazyRecursion because my teacher said it’s not usual.

if n<3 OR m<3 --> return 1
if n is pair AND m is odd --> return CrazyRecursion(n-1,m) + 1
if n is odd AND m is pair --> return CrazyRecursion(n-1,m-2) + 2
if n AND m are pair --> return CrazyRecursion(n-2,m-1) + 3
if n AND m are odd --> return CrazyRecursion(n,m-1) + 4

Esse programa faz uma função recursiva seguindo as regras acima!
O nome da função recursiva é CrazyRecursion.
*/


int CrazyRecursion(int n, int m); // Protótipo da Função

int main(){
    int n = 0, m = 0;
    cin >> n >> m;
    cout << CrazyRecursion(n, m) << endl;

    return 0;
    
}

int CrazyRecursion(int n, int m){
    if((n < 3) or (m < 3)) return 1; // Caso base da recursão
    else if((n%2 == 0) and (m%2 != 0)) return CrazyRecursion(n - 1, m) + 1;
    else if((n%2 != 0) and (m%2 == 0)) return CrazyRecursion(n - 1, m - 2) + 2;
    else if((n%2 == 0) and (m%2 == 0)) return CrazyRecursion(n - 2, m - 1) + 3;
    else if((n%2 != 0) and (m%2 !=0))  return CrazyRecursion(n, m - 1) + 4;
}
