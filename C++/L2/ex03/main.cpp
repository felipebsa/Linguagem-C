#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int masc() {
    float high;
    cin >> high;
    cout << 72,7 * high - 58;
    return 0;
}

int fem() {
    float high;
    cin >> high;
    cout << 62,1 * high - 44,7;
    return 0;
}
int main() {
    string sex;
    cin >> sex;
    if (sex == "Masculino") {
        masc();
    }
    else if (sex == "Feminino") {
        fem();
    }
    else {
        cout << "write something Feminino or Masculino";
    }
    return 0;
}
