/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
   public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        ListNode* p = list1;
        ListNode* q = list2;
        ListNode *prev1 = nullptr, *prev2 = nullptr;
        ListNode* head = (p->val <= q->val) ? list1 : list2;
        while (p != nullptr && q != nullptr) {
            if (p->val <= q->val) {
                while (p != nullptr && p->val <= q->val) {
                    prev1 = p;
                    p = p->next;
                }
                prev1->next = q;
            } else {
                while (q != nullptr && q->val < p->val) {
                    prev2 = q;
                    q = q->next;
                }
                prev2->next = p;
            }
        }
        return head;
    }
};
