#include <algorithm>  // for std::swap
#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    void reverseString(vector<char>& s) noexcept {
        size_t left = 0;
        size_t right = s.size();
        while (left < right) {
            --right;
            if (left >= right) break;
            std::swap(s[left], s[right]);
            ++left;
        }
    }
};

int main() {
    Solution aux;

    vector<char> things;

    string words;
    

            cin >>
        words;

    for (int i = 0; i < words.size(); i++) things.push_back(words[i]);

    aux.reverseString(things);

    for (int i = 0; i < things.size(); i++) cout << things[i];
}