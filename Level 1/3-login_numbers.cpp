#include <iostream>
using namespace std;

/*  This program calculates in how many days your page reach a number X of logins that you will put.

Esse programa calcula em quantos dias a sua página alcançou um número X de acessos que você irá inserir. */

int main(){

    int qnt=0,acu=0,where=0, teto = 0;
    cin >> teto >> qnt;
    int acesso[qnt];

    for(int i = 0; i < qnt; i++) cin >> acesso[i];
    for(int i = 0; i < qnt; i++){
        acu += acesso[i];
        if(acu >= teto){
            where = (i + 1);
            cout << where;
            return 0;
        }
    }


}
