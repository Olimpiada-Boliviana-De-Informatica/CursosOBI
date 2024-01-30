
using ll = long long;
const int MOD = 1e9 + 7;

ll bigmod(ll base, ll power) {
    ll res = 1;
    ll p = base % MOD;
    while (power > 0) {
        if (power % 2 == 1) {
            res = ((res % MOD) * (p % MOD)) % MOD;
        }
        power /= 2;
        p = ((p % MOD) * (p % MOD)) % MOD;
    }
    return res;
}

ll inversemod(ll base) {
    return bigmod(base, MOD - 2);
}