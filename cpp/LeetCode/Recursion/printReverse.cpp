#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    void reverseString(vector<char>& s) { reverseHelper(s, 0, s.size() - 1); }

   private:
    void reverseHelper(vector<char>& s, int left, int right) {
        if (left >= right) return;  
        swap(s[left], s[right]);                // In-place swap
        reverseHelper(s, left + 1, right - 1);  
    }
};

int main() {
    Solution aux;

    vector<char> things;

    string words;

    cin >> words;

    for (int i = 0; i < words.size(); i++) things.push_back(words[i]);

    aux.reverseString(things);

    for (int i = 0; i < things.size(); i++) cout << things[i];
}