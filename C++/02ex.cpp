/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 02ex.cpp
* Data: 26/04/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* Ler um número inteiro, calcular e exibir separadamente 
* as potências de 2^0 até 2^(esse número).
*/


#include <iostream>
using namespace std;

int main() {
    int num;
    long long result = 1;
    cout << "escreva um numero: " << endl;
    cin >> num;

    for (int i = 0; i <= num; i++) {
        cout << "2^" << i << " == " << result << endl;
        result *= 2;
    }
    return 0;
}