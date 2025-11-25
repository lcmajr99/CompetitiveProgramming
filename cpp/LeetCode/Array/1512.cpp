#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> m;
    int vet[n];
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
        if (m.find(vet[i]) != m.end())
            m[vet[i]] += 1;
        else
            m.insert(pair<int, int>(i, 0));
    }
    1   1   1   1   1
    int cont = 0;
    for (auto j : m) {
        if (j.second > 0) {
            cont += j.second;
        }
    }
    cout << cont;
}