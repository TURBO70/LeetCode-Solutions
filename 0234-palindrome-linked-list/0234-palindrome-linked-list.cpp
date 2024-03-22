class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int cnt = 0;
        ListNode* temp = head;
        ListNode* pre = nullptr;
        ListNode* nex = nullptr;
        while (temp != nullptr) {
            nex = temp->next;
            temp->next = pre;
            pre = temp;
            temp = nex;
            cnt++;
        }
        for (int i = 0; i < cnt / 2; i++) { // Fix condition in the loop
            if (pre->val != head->val)
                return false;
            // head = head->next;
            pre = pre->next;
        }
        return true;
    }
};
