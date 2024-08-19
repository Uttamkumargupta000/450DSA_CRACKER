// -----------------Approach 1 Leetcode problem----------


//  TC = O(N)    SC = O(1)


class Solution {
    private:
    ListNode* loopDetect(ListNode* head){
        
        if(head == NULL){
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(slow != NULL && fast != NULL){
            fast = fast -> next;

            if(fast != NULL){
                fast = fast -> next;
            }

            slow = slow -> next;

            if( slow == fast ){
                return slow;
            }
        }
        return NULL;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL){
            return NULL;
        }

        ListNode* intersectNode = loopDetect(head);

        if(intersectNode == NULL){
            return NULL;
        }

        ListNode* slow = head;

        while(slow != intersectNode){
            slow = slow -> next;
            intersectNode = intersectNode -> next;
        }

        return slow;
    }
};