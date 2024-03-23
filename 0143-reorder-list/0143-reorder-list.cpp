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
    void reorderList(ListNode* head) {
        ListNode *tmp = head, *half = head,* pre = nullptr;
        while (tmp->next && tmp->next->next) {
            tmp = tmp->next->next;
            half = half->next;
        }
        if (tmp->next)
            half = half->next;

        while (half) {
            tmp = half->next;
            half->next = pre;
            pre = half;
            half = tmp;
        }
        half=pre;
        while (head && half) {
            tmp = head->next;
            pre = half->next;
            head->next = half;
            half->next = tmp;
            head = tmp;
            half = pre;
        }
     if (head && head->next) head->next->next = NULL;
    }
};