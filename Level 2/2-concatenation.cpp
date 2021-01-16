#include <iostream>
using namespace std;

/*  This program makes a known function of words concatenation but without to use functions.

Esse programa faz a conhecida função de concatenar palavras mas sem usar qualquer função. */

int main(){

    char cadeia1[200], cadeia2[100];
    cin.getline(cadeia1, 200);
    cin.getline(cadeia2, 100);

    int i = 0, j = 0, last = 0;
    for (i = 0;cadeia1[i] != '\0'; i++) last++;
    for (j = 0; cadeia2[j] != '\0'; j++, i++) {
        cadeia1[i] = cadeia2[j];
        last++;
    }
    cadeia1[i] = '\0';
    cout << last << endl << cadeia1;
}
