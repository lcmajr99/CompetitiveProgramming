#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        vector<int> index(128, -1);  // para todos os caracteres ASCII
        int maxLen = 0;
        int left = 0;  // início da janela

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            // se já apareceu, atualiza left para a posição seguinte
            if (index[c] >= left) {
                left = index[c] + 1;
            }

            index[c] = right;  // atualiza último índice do caractere
            maxLen = max(maxLen, right - left + 1);
        }
        
        return maxLen;
    }
};

int main() {
    Solution sol = Solution();

    string teste;
    cin >> teste;
    cout << sol.lengthOfLongestSubstring(teste) << endl;
}