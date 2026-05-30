/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 03ex.cpp
* Data: 26/04/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* Ler vários números até que seja digitado um número negativo. 
* Calcular e exibir a soma desses números.
*/


#include <iostream>
using namespace std;

int main() {
    int num = 0, cont = 0;

    while (true) {
        cout << "escreva um numero: " << endl;
        cin >> num;
        if (num < 0) {break;}
        cont += num;

    }
    cout << "a soma dos numeros inteiros e: " << cont << endl;
    
    return 0;
}