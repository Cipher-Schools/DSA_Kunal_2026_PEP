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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n1=0;
        int n2=0;
        ListNode* curr1=headA;
        ListNode* curr2=headB;
        while(curr1){
            n1++;
            curr1=curr1->next;
        }
        while(curr2){
            n2++;
            curr2=curr2->next;
        }
        int k=abs(n1-n2);

        // The list with greater size should start with k+1th node.
        if(n1>n2){
            curr1=headA;
            curr2=headB;
        }
        else{
            curr1=headB;
            curr2=headA;
        }
        for(int i=0;i<k;i++)curr1=curr1->next;
        while(curr1!=NULL and curr2!=NULL ){
            if(curr1==curr2)return curr1;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return NULL;

    }
};
