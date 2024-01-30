#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll exp(ll x, ll n, ll m) {
    assert(n >= 0);
    x %= m;
    ll res = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            res = res * x % m;
        }
        x = x * x % m;
        n /= 2;
    }
    return res;
}
