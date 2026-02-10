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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL or head->next==NULL)return head;
        ListNode* curr1=head;

        ListNode*curr2= head->next;
        head=head->next;
        ListNode* prev=NULL;
        while(curr2!=NULL){
            curr1->next=curr2->next;
            curr2->next=curr1;
            if(prev!=NULL)prev->next=curr2;
            prev=curr1;
            curr1=curr1->next;
            curr2=curr1!=NULL? curr1->next: NULL;
        }
        return head;
    }
};
