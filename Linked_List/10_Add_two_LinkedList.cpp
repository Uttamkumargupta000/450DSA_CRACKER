// -------------Approach 1 Geeks for Geeks -----------

//  TC = O(N)  SC = O(1)

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
    void insertAtTail(Node* &head, Node* &tail, int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail -> next = temp;
            tail = temp;
        }
    }
    Node* add(Node* num1, Node* num2){
        int carry = 0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        while(num1 != NULL || num2 != NULL || carry != 0){
            int val1 = 0;
            if(num1 != NULL){
                val1 = num1 -> data;
            }
            
            int val2 = 0;
            if(num2 != NULL){
                val2 = num2 -> data;
            }
            
            int sum = val1 + val2 + carry;
            
            int digit = sum %10;
            insertAtTail(ansHead, ansTail, digit);
            
            carry = sum /10;
            
            if(num1 != NULL){
                num1 = num1-> next;
            }
            
            if(num2 != NULL){
                num2 = num2 -> next;
            }
        }
        return ansHead;
    }
  public:
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(struct Node* num1, struct Node* num2) {
        // code here
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        Node* ans = add(num1, num2);
        
        ans = reverse(ans);
        
        return ans;
    }
};