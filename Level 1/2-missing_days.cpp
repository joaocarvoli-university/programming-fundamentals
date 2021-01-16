#include <iostream>
using namespace std;


/* This program is able to check how days missing to the end of the year, respecting the limits that a year can be a leap or not.

Esse programa é capaz de verificar quantos dias faltam para o final do ano, respeitando os limites de o ano poder ser bissexto ou não. */

int main(){

    int dia=0,mes=0,ano=0,acum=0;
    cin >> dia >> mes >> ano;
    int mesesB[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int mesesNB[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(ano%4==0 and (ano%100!=0 or ano%400==0)){
        acum = mesesB[mes-1] - dia;
        for(int i = mes; i < 12; i++){
            acum += mesesB[i];
        }
    }
    else {
        acum = mesesNB[mes-1] - dia;
        for(int i = mes; i< 12; i++){
            acum += mesesNB[i];
        }
    }
 
cout << acum << endl;
}
