#include <iostream>
using namespace std;

/* This program searches for a word in a phrase working with string BUT YOU CANNOT USE FUNCTIONS OR STRINGS...
If that word isn't there the program returns -1.

Esse programa procura uma uma palavra em uma frase trabalhando com cadeia de caracteres MAS VOCÊ NÃO PODE USAR FUNCÕES OU STRINGS...
Se a palavra não estiver contida na frase o programa retorna -1*/

int sub_cadeia(char texto[], char padrao[]){
    
    int s_phrase = 0, s_word = 0;
    while(texto[s_phrase] != '\0') s_phrase++;
    while(padrao[s_word] != '\0') s_word++;


    int aux1 = 0, aux2 = 0, aux3 = 0, indice = 0;
    char letra;

    for(int i = 0; i <= s_phrase;){
        letra = padrao[aux1];

        for(int i = 0; i <= s_phrase and aux2 != s_word; i++){
            if(texto[i] == letra){
                indice = i;
                for(aux1 = 0; aux1 != s_word; i++){
                    if(texto[i] == padrao[aux1++]){
                        aux2++;
                        aux3 = aux2; 
                    } else if(texto[i] != padrao[aux1]){
                        aux2 = 0;
                        break;
                    }
                }
            }
        }
    if(aux3 == s_word) return indice;
    else return - 1;
    }
}
int main(){
    char phrase[100];
    char word[100];
    cin.getline(phrase, 100);
    cin.getline(word, 100);
    cout << sub_cadeia(phrase, word);
}
