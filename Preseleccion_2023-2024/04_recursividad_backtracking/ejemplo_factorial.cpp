#include <bits/stdc++.h>

using namespace std;

vector<long long> memo(5000, -1);

long long factorial(int n) {
    if (n == 1)
        return 1;
    if (memo[n] != -1)
        return memo[n];
    return memo[n] = (factorial(n - 1) * n) % 1000000007;
}

int main() {
    int n, valor;
    cin >> n;
    while (n--) {
        cin >> valor;
        cout << factorial(valor) << endl;
    }
    return 0;
}
