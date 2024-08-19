// ---------- Approach 1  Geeks for Geeks Solution -------------


//  TC = O(N)   SC = O(N);

class Solution {
  public:
    struct node *reverseIt(struct node *head, int k) {
        // Complete this method
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        struct node* prev = NULL;
        struct node* curr = head;
        struct node* forward = NULL;
        int count = 0;
        
        while(curr != NULL && count < k){
            forward = curr -> next;
            curr -> next = prev;
            
            prev = curr;
            curr = forward;
            count++;
        }
        
        if(forward != NULL){
            head -> next = reverseIt(curr, k);
        }
        return prev;
    }

};


// ---------- Approach 1  Leetcode Solution -------------


//  TC = O(N)   SC = O(N);


class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL || head -> next == NULL){
            return head;
        }
        //checking for the reverse case 
        ListNode* temp = head;
        for( int i = 0; i < k ; i++){
            if(temp == NULL){
                return head;
            }
            temp = temp -> next;
        }

        // for first k node its reverse 
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        int count = 0;

        while(curr != NULL && count < k){
            forward = curr -> next;
            curr -> next = prev;

            prev = curr;
            curr = forward;
            count++;
        }

        //checking for another next 
        if(forward != NULL){
            head -> next = reverseKGroup(forward, k);
        }

        return prev;
    }
};