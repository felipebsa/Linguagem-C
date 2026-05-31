#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 10, sum1 = 0, sum2 = 0; 
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
        v2[i] = v1[i] * -1;
    }
    for (int i = 0; i < n; i++) {
        if (v1[i] > 0) sum1+=v1[i];
        if (v2[i] > 0) sum2+=v2[i];
    }
    cout << sum1 + sum2 << endl;
    return 0;
}
