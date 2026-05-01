/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 01ex_fixed.cpp
* Data: 01/05/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler um número inteiro. Verificar e exibir se o número é primo.
*
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 2) {
        prime = false;
    } 
    else {
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                prime = false;
                break;
            }
        }
    }

    if (prime) {
        cout << number << " is prime." << endl;
    } else {
        cout << number << " is not prime.";
    }

    return 0;
}