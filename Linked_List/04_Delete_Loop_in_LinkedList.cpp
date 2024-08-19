//  -------------------Approach 1 Geeks for Geeks -------------------

// TC = O(N)  SC = O(1)

class Solution {
    private:
    struct Node* detectLoop(struct Node* head){
        if(head == NULL ){
            return NULL;
        }
        
        struct Node* slow = head;
        struct Node* fast = head;
        
        while(slow != NULL && fast != NULL){
            fast = fast -> next;
            
            if(fast != NULL){
                fast = fast -> next;
            }
            slow = slow -> next;
            
            if(slow == fast ){
                return slow;
            }
        }
        return NULL;
    }
    
    struct Node* startOfLoop(struct Node* head){
        
        if(head == NULL){
            return NULL;
        }
        
        struct Node* intersectNode = detectLoop(head);
        
        if(intersectNode == NULL){
            return NULL;
        }
        
        struct Node* slow = head;
        
        while(slow != intersectNode){
            
            slow = slow -> next;
            intersectNode = intersectNode -> next;
        }
        
        return slow;
    }
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        // just remove the loop without losing any nodes
        if(head == NULL){
            return ;
        }
        
        struct Node* loopDetect = startOfLoop(head);
        
        if(loopDetect == NULL){
            return ;
        }
        
        struct Node* temp = loopDetect;
        
        while(temp -> next != loopDetect){
            temp = temp -> next;
        }
        
        temp -> next = NULL;
        
    }
};