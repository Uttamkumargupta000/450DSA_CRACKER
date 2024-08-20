// --------------------- Appraoch 1 Geeks for Geeks----------------

//  TC = O(N)


class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        Node* secLast = NULL;
        Node* last = head;
        
        while(last -> next != NULL){
            secLast = last;
            last = last -> next;
        }
        
        secLast -> next = NULL;
        
        last -> next  = head;
        head = last;
        
        return head;
    }
};