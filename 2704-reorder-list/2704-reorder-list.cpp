/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode *head) {
        
        vector<ListNode*> nodes;
        
        if(head == NULL)
            return;
            
        ListNode* n = head;
        
        while(n != NULL)
        {
            nodes.push_back(n);
            n = n->next;
        }
        
        for(i = 0, j = nodes.size() - 1; i + 1 <j;)
        {
            ListNode* p0 = nodes[i];
            ListNode* p1 = nodes[i + 1];
            ListNode* pn = nodes[j];
            ListNode* pn_1 = nodes[j - 1];
            
            p0->next = pn;
            pn->next = p1;
            pn_1->next = NULL;
            
            --j;
            ++i;
        }
        
        return head;
    }
};