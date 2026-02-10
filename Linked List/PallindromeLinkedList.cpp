// https://leetcode.com/problems/palindrome-linked-list/
bool isPalindrome(ListNode* head) {


        ListNode* curr=head;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        ListNode*midprev=NULL;
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            midprev=slow;
            slow=slow->next;

        }
        ListNode* mid=slow;
        curr=mid;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        if(!midprev)return true;
        midprev->next=prev;
        ListNode* curr1=prev;
        curr=head;
        while(curr!=prev){
            if(curr->val!=curr1->val)return false;
            curr=curr->next;
            curr1=curr1->next;
        }
        return true;
    }
