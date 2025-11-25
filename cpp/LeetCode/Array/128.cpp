#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> array;
    int num;

    while (cin >> num) {
        array.push_back(num);
    }
    if (array.empty()) return 0;
    sort(array.begin(), array.end());
    int cont = 0;
    int big = -1;
    for (int i = 0; i < array.size() - 1; i++) {
        if (array[i] == array[i + 1]) cont++;
        if (cont > big) big = cont;
    }
    cout << big << endl;
}