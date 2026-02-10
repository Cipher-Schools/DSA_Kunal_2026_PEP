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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)return head;
        ListNode* evenhead=new ListNode(-1);
        ListNode* oddhead=head;
        ListNode* curr=head->next;
        ListNode* even=evenhead;
        ListNode* odd=oddhead;
        int index=2;
        while(curr){
            if(index%2==0){
                even->next=curr;
                curr=curr->next;
                even=even->next;
            }
            else {
                odd->next=curr;
                curr=curr->next;
                odd=odd->next;
            }
            index++;
        }
        odd->next=evenhead->next;
        even->next=NULL;
        return oddhead;
    }
};
