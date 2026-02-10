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
        ListNode* temphead= new ListNode(-1);
        ListNode* curr=temphead;
        ListNode* curr1=list1;
        ListNode* curr2=list2;
        while(curr1 and curr2){
            if(curr1->val < curr2->val){
                curr->next=curr1;
                curr=curr->next;
                curr1=curr1->next;
            }
            else {
                curr->next=curr2;
                curr=curr->next;
                curr2=curr2->next;
            }
        }
        while(curr1){
            curr->next=curr1;
                curr=curr->next;
                curr1=curr1->next;
        }
        while(curr2){
             curr->next=curr2;
                curr=curr->next;
                curr2=curr2->next;
        }
        return temphead->next;
    }
};
