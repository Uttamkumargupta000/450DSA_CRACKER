// ------- Appraoch 1 using iteration --------------


//  TC = O(N)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        
        while(curr!= NULL){
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
};



// -------------- Approach 2 using Recursion ---------------


//  TC = O(N)    SC = o(N)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL || head -> next == NULL){
            return head;
        }

        ListNode* smallerNode = reverseList(head -> next);
        head -> next -> next = head;
        head -> next = NULL;
        return smallerNode;

    }
};