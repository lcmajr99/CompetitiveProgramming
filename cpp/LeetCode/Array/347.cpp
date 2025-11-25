#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, num, k;
    cin >> a;
    map<int, int> m;
    vector<int> vec;

    for (int i = 0; i < a; i++) {
        cin >> num;
        vec.push_back(num);
    }
    cin >> k;

    unordered_map<int, int> freq;

    for (int x : vec) {
        freq[x]++;
    }

    vector<pair<int, int>> v(freq.begin(), freq.end());
    sort(v.begin(), v.end(),
         [](auto& a, auto& b) { return a.second < b.second; });

    vector<int> res;
    for (int i = 0; i < k; i++) {
        res.push_back(v[i].second);
    }
    return res;
}