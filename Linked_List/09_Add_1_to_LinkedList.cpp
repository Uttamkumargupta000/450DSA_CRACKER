// ----------Approach 1 Geeks for geeks

//  TC = O(N) SC = O(1)

class Solution {
    private:
    Node* reverse(Node* head){
        if(head == NULL){
            return NULL;
        }
        
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        
        while(curr != NULL){
            forward = curr -> next;
            curr -> next = prev;
            
            prev = curr;
            curr = forward;
        }
        return prev;
    }
  public:
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        if(head == NULL){
            return NULL;
        }
        
        head = reverse(head);
        Node* curr = head;
        int carry = 1;
        
        while(curr != NULL){
            int sum = curr -> data + carry ;
            carry = sum / 10;
            curr -> data = sum %10;
            
            if(carry == 0){
                break;
            }
            if(curr -> next == NULL && carry > 0){
                curr -> next = new Node(carry);
                carry = 0;
                break;
            }
            curr = curr -> next;
        }
        Node* ans = reverse(head);
        
        return ans;
    }
};