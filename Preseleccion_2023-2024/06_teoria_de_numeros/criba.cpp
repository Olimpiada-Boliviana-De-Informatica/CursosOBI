#include <iostream>
#include <vector>

using namespace std;

vector<bool> prime((int)1e6 + 1, true);
vector<vector<int>> desc(1e6 + 1);

void criba(int n) {
    prime[0] = false;
    prime[1] = false;
    for (int i = 4; i <= n; i++) {
        prime[i] = false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (prime[i]) {
            for (int j = 2 * i; j <= n; j += i) {
                prime[j] = false;
                desc[j].push_back(i);
            }
        }
    }
}