#include <iostream>
using namespace std;

/* Calculating the n-th term of a sequence that the first term is equal to 1 and the second term is equal to 5. After the third term on is calculates the sum of the last term + the double the penultimate

Calculando o n-ésimo termo de uma sequência que o primeiro termo é igual a 1 e o segundo é igual a 5. Do terceiro termo em diante é calculada a soma do último termo + o dobro do penúltimo. */

int main(){

    int n;
    cin >> n;
    int value[n];
    value[0] = {1};
    value[1] = {5};

    for(int i = 2; i < n; i++){
        value[i] = value[i-1] + 2*value[i-2];
        }
        cout << value[n-1];
}
