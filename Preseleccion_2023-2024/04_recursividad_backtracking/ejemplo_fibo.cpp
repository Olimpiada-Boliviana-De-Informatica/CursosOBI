#include <bits/stdc++.h>

using namespace std;

vector<long long> memo(5000, -1);

long long fibo(int n) {
    if (n == 0 or n == 1)
        return n;
    if (memo[n] != -1)
        return memo[n];
    return memo[n] = (fibo(n - 1) + fibo(n - 2)) % 1000000007;
}

vector<long long> fib(1000000);

void precalcular(int max_value) {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= max_value; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        fib[i] = fib[i] % 1000000007;
    }
}

long long fibonacci(int valor) {
    return fibo(valor);
    // return fib[valor];
}

int main() {
    int n, valor;
    cin >> n;
    // precalcular(1000000 - 1);
    while (n--) {
        cin >> valor;
        cout << fibonacci(valor) << endl;
    }
    return 0;
}
