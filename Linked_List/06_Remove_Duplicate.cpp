// ----------- Approach 1 Leetcode ------------------

//  TC = O(N);

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == NULL){
            return NULL;
        } 
        ListNode* curr = head;

        while(curr != NULL){
            if((curr -> next != NULL) && (curr -> val == curr -> next -> val)){
                ListNode* nextNode = curr -> next -> next;
                ListNode* deleteNode = curr -> next;
                delete deleteNode;

                curr -> next = nextNode;
            }
            else{
                curr = curr -> next;
            }
        }
        return head;
    }
};