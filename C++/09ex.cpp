/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 09ex.cpp
* Data: 01/05/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* Ler um número entre 50 e 100. 
* Exibir a sequência de Fibonacci até esse número.
*/

#include <iostream>
using namespace std;

int main() {
    
    int n1 = 0, n2 = 1, res, n;
    
    cout << "Digite um número entre 50 a 100: ";
    cin >> n;
      if (n < 50 || n > 100) {
        cout << "Número inválido!";
        return 0;
    }
    cout << n1 << " " << n2;
    res = n1 + n2;
    while (res <= n) {
        cout << res << " " << "";
        n1 = n2;
        n2 = res;
        res = n1 + n2;
    }
    
    return 0;
}