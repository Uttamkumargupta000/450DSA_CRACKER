// --------------Appraoch 1 Geeks for Geeks solution 

//  TC = O(N)


class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        
        if(head == NULL || head -> next == NULL){
            return false;
        }
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && slow != NULL){
            fast = fast -> next;
            
            if(fast != NULL){
                fast = fast -> next;
            }
            
            slow = slow -> next;
            
            if(slow == fast){
                return true;
            }
        }
        
        return false;
    }
};


// -------------------------- Aprroach 2 Leetcode solution -------------------

//  TC = O(N)

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL|| head -> next == NULL){
            return false;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(slow != NULL & fast != NULL){
            fast = fast -> next;
            if(fast != NULL){
                fast = fast -> next;
            }
            slow = slow -> next;

            if(slow == fast ){
                return true;
            }
        }

        return false;
    }
};