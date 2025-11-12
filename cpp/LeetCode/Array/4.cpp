
#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int n1 = nums1.size(), n2 = nums2.size();
        int total = n1 + n2;
        int half = total / 2;

        int left = 0, right = n1;

        while (true) {
            int i = (left + right) / 2;  // partição em nums1
            int j = half - i;            // partição em nums2

            int Aleft = (i > 0) ? nums1[i - 1] : INT_MIN;
            int Aright = (i < n1) ? nums1[i] : INT_MAX;
            int Bleft = (j > 0) ? nums2[j - 1] : INT_MIN;
            int Bright = (j < n2) ? nums2[j] : INT_MAX;

            if (Aleft <= Bright && Bleft <= Aright) {
                // Achou a partição correta
                if (total % 2)
                    return min(Aright, Bright);  // ímpar
                else
                    return (max(Aleft, Bleft) + min(Aright, Bright)) / 2.0;
            } else if (Aleft > Bright) {
                right = i - 1;
            } else {
                left = i + 1;
            }
        }
    }
};

int main() {
    Solution sol;

    int n, m;
    cin >> n;  // tamanho de nums1
    vector<int> nums1(n);
    for (int i = 0; i < n; i++) cin >> nums1[i];

    cin >> m;  // tamanho de nums2
    vector<int> nums2(m);
    for (int i = 0; i < m; i++) cin >> nums2[i];

    double result = sol.findMedianSortedArrays(nums1, nums2);
    cout << fixed << setprecision(5) << result << endl;
}
