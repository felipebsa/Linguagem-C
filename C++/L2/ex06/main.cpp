#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void week() {
    int n;
    cin >> n;
    switch (n) {
        case 1: cout << "Segunda"; break;
        case 2: cout << "Terça"; break;
        case 3: cout << "Quarta"; break;
        case 4: cout << "Quinta"; break;
        case 5: cout << "Sexta"; break;
        case 6: cout << "Sabado"; break;
        case 7: cout << "Domingo"; break;
        default: cout << "1-7";
    };
}
int main() {
    week();
    return 0;
}
