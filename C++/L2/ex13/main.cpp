#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 20, sum = 0; 
    char w;
    vector<char> v(n);
    cin >> w;
    
    for (int i = 0; i < n; i++) cin >> v[i];
    for (char c:v) {
        if (c == w) sum++;
    }
    cout << sum;
    return 0;
}
