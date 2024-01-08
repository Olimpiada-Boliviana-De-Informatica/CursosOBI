#include <bits/stdc++.h>

using namespace std;

void vector_example() {
    vector<int> v;
    cout << "SIZE: " << v.size() << endl;
    cout << "EMPTY: " << v.empty() << endl;
    cout << "-------------------\n";

    cout << "Insertar 1 y 2\n";
    v.push_back(1);
    v.push_back(2);

    cout << "SIZE: " << v.size() << endl;
    cout << "EMPTY: " << v.empty() << endl;
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << "-------------------\n";

    cout << "Borrar ultimo\n";
    v.pop_back();
    cout << "SIZE: " << v.size() << endl;
    cout << "EMPTY: " << v.empty() << endl;
    cout << "-------------------\n";

    cout << "Insertar 3, 2, 1 y ordenar\n";
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }

    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
}

void set_example() {
    unordered_set<int> s;
    cout << "SIZE: " << s.size() << endl;
    cout << "EMPTY: " << s.empty() << endl;
    cout << "-------------------\n";

    cout << "Insertar 1 y 2\n";
    s.insert(1);
    s.insert(2);

    cout << "SIZE: " << s.size() << endl;
    cout << "EMPTY: " << s.empty() << endl;
    cout << "-------------------\n";

    cout << "Borrar 1\n";
    s.erase(1);
    cout << "SIZE: " << s.size() << endl;
    cout << "EMPTY: " << s.empty() << endl;
    cout << "-------------------\n";

    cout << "Insertar 3, 2, 1 y ordenar??\n";
    s.insert(3);
    s.insert(2);
    s.insert(1);

    for (auto x : s) {
        cout << x << " ";
    }
    cout << endl;
}

void map_example() {
    map<string, int> m;
    cout << "SIZE: " << m.size() << endl;
    cout << "-------------------\n";

    cout << "Insertar 1 y 2\n";
    m["uno"] = 1;
    m["dos"] = 2;

    cout << "SIZE: " << m.size() << endl;
    cout << "-------------------\n";
    for (auto x : m) {
        cout << x.first << " " << x.second << endl;
    }
    cout << "-------------------\n";

    m["uno"] = 3;
    cout << "SIZE: " << m.size() << endl;
    for (auto x : m) {
        cout << x.first << " " << x.second << endl;
    }
}

void string_example() {
    string s;
    s = "Hola mundo!";
    cout << s << endl;
    cout << "SIZE:" << s.size() << endl;
    cout << "EMPTY: " << s.empty() << endl;

    cout << s[0] << endl;
    cout << s[s.size() - 1] << endl;

    string s2 = s.substr(0, 4);
    cout << s2 << endl;

    cout << s.find("mundo") << " " << s[s.find("mundo")] << endl;

    s[1] = 'X';
    cout << s << endl;
}

int main() {
    /*
        List -> vector<type>
        Set {} -> set<type>
        Dict {key:value} -> map<type_key, type_value>
        str -> string
    */

    vector_example();
    // set_example();
    // map_example();
    // string_example();
    return 0;
}