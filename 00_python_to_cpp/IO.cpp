#include <bits/stdc++.h>

using namespace std;

void ejemplo1() {
    char a, b;
    string s;
    long long t, n;
    cout << "Hola!" << endl;

    cout << "Ingresa un numero: ";
    cin >> n >> t;
    cout << n << t << endl;

    cout << "Ingresa dos caracteres: ";
    cin >> a >> b;
    cout << a << " " << b << endl;

    cout << "Ingresa un string: ";
    cin >> s;
    cout << s << endl;

    cout << "Ingresa un string y un numero:";

    cin >> s >> t;
    cout << s << " " << t << endl;

    cout << "Ingresa un string con espacios:";
    cin.ignore();
    getline(cin, s);
    getline(cin, s);
    getline(cin, s);
    getline(cin, s);
    cout << s << endl;
}

void ejemplo2() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0)
            break;
        cout << n << endl;
    }
}

void ejemplo3() {
    int n, maxi = 0;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        maxi = max(maxi, x);
    }
    cout << maxi << endl;
}

void ejemplo4() {
    int n;
    while (cin >> n) {
        cout << n << endl;
    }
}

void ejemplo5() {
    string s;
    while (getline(cin, s)) {
        cout << "SALIDA: " << s << endl;
    }
}

int main() {
    ejemplo1();
    // ejemplo2();
    // ejemplo3();
    // ejemplo4();
    // ejemplo5();
    return 0;
}