#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool impar() {
    int N, sum = 0;
    bool found = false;
    cin >> N;
    for (int i = 0; i < N; i++) {
        if (i % 2 != 0) {
            sum += i;
            found = true;
        }
    }
    if (found) {
        cout << sum;
    }
    else {
        cout << "write a number N > 0";
    }
    return found;

}
int main() {
    impar();
    
    return 0;
}
