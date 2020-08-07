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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *next = new ListNode(head->val);
        ListNode *curr;
        while(head->next!=NULL){
            curr = new ListNode(head->next->val, next);
            head=head->next;
            next=curr;
        }
        return curr;
    }
};
