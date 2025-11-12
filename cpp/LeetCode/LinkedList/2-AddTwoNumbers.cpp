#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr){} 
    ListNode(int x) : val(x),next(nullptr){} * ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Solução iterativa
class Solution {
   public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        unsigned long long c1 = 1;
        unsigned long long numero1 = 0;
        while (l1 != NULL) {
            numero1 += c1 * l1->val;
            c1 *= 10;
            l1 = l1->next;
        }
        c1 = 1;
        unsigned long long numero2 = 0;
        while (l2 != NULL) {
            numero2 += c1 * l2->val;
            c1 *= 10;
            l2 = l2->next;
        }
        unsigned long long resultado = numero2 + numero1;
        ListNode* listResult = new ListNode;
        ListNode* root = listResult;
        while (resultado / 10 > 0) {
            listResult->val = resultado % 10;
            listResult->next = new ListNode;
            listResult = listResult->next;
            resultado /= 10;
        }
        listResult->val = resultado % 10;
        listResult->next = NULL;

        return root;
    }
};

// Função auxiliar: cria lista ligada a partir de vector
ListNode* createList(const vector<int>& nums) {
    ListNode dummy(0);
    ListNode* curr = &dummy;
    for (int num : nums) {
        curr->next = new ListNode(num);
        curr = curr->next;
    }
    return dummy.next;
}

// Função auxiliar: imprime lista ligada
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution sol;

    // Test case 1
    vector<int> v1 = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    vector<int> v2 = {5, 6, 4};
    ListNode* l1 = createList(v1);
    ListNode* l2 = createList(v2);

    ListNode* result = sol.addTwoNumbers(l1, l2);

    cout << "Test case 1: ";
    printList(result);  // Expected output: 7 -> 0 -> 8

    return 0;
}
