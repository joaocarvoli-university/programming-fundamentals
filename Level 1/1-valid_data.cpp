#include <iostream>
using namespace std;

/*This program is able to confer if a date is valid respecting the known limits how: 
leap year, the month with 28, 30, or 31 days ...

Esse programa é capaz de conferir se uma data é válida, respeitando os limites conhecidos, como: ano bissexto, mês com 28,30 ou 31 dias.*/

int main(){

    int dia=0,mes=0,ano=0;
    cin >> dia >> mes >> ano;

    if(mes==2){
        if(dia==28 or dia==29){
            if(ano%4==0){
                if(ano%100!=0 or ano%400==0){
            cout << "valida" << endl;
                }
            }
            else {
                cout << "invalida" << endl;
            }
        }
        else if(dia>0 and dia<28){
            cout << "valida" << endl;
        }
        else{
            cout << "invalida";
        }
    }
    else if(mes==4 or mes==6 or mes==9 or mes==11){
        if(dia>0 and dia<31){
            cout << "valida" << endl;
        }
        else{
            cout << "invalida" << endl;
        }
    }
    else if(mes==1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12){
        if(dia>0 and dia<32){
            cout << "valida" << endl;
        }
        else{
            cout << "invalida" << endl;
        }
    }

    
}
