#include <bits/stdc++.h>

using namespace std;

vector<int> peso(20);
int n;
/*
long long solve(long long grupo1, long long grupo2, int pos) {
    if (pos == n) {
        // cout << grupo1 << " " << grupo2 << " " << abs(grupo1 - grupo2) << endl;
        return abs(grupo1 - grupo2);
    }

    long long res1 = solve(grupo1 + peso[pos], grupo2, pos + 1);
    long long res2 = solve(grupo1, grupo2 + peso[pos], pos + 1);
    return min(res1, res2);
}*/
long long best_sol = 1000000000LL * 20;

void solve(long long grupo1, long long grupo2, int pos) {
    if (pos == n) {
        // cout << grupo1 << " " << grupo2 << " " << abs(grupo1 - grupo2) << endl;
        best_sol = min(best_sol, abs(grupo1 - grupo2));
        return;
    }

    solve(grupo1 + peso[pos], grupo2, pos + 1);
    solve(grupo1, grupo2 + peso[pos], pos + 1);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> peso[i];
    }
    solve(0, 0, 0);
    cout << best_sol << endl;
    return 0;
}
