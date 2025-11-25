#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int numIdenticalPairs(vector<int>& nums) {
        int cont = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j] && i < j) {
                    cont++;
                }
            }
        }
        return cont;
    }
};

int main() {
    // test

    int n;
    cin >> n;

    vector<int> vet;

    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vet.push_back(num);
    }
    Solution aux = Solution();
    cout << aux.numIdenticalPairs(vet) << endl;
}