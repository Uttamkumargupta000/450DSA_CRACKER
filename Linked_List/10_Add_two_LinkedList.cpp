// -------------Approach 1 Geeks for Geeks -----------

//  TC = O(N)  SC = O(1)


// struct Node {
//     int data;
//     struct Node* next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };
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




// ------------Approach 2 Leetcode-----------

//  TC = O(N)  SC = O(1)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    private:
    ListNode* reverse(ListNode* head){
        if(head == NULL){
            return NULL;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;

        while(curr != NULL){
            forward = curr -> next;
            curr -> next = prev;

            prev = curr;
            curr = forward;
        }
        return prev;
    }
    void insertAtTail(ListNode* &head, ListNode* &tail, int data){
        ListNode* temp = new ListNode(data);
        if(head == NULL){
            head = temp;
            tail = temp;
            return ;
        }
        else{
            tail -> next = temp;
            tail = temp;
        }
    }
    ListNode* add(ListNode* l1, ListNode* l2){
        int carry = 0;

        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;

        while(l1 != NULL || l2 != NULL || carry != 0){
            int val1 = 0;
            if(l1 != NULL){
                val1 = l1 -> val;
            }

            int val2 = 0;
            if(l2 != NULL){
                val2 = l2 -> val;
            }

            int sum = val1 + val2 + carry;

            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);

            carry = sum /10;
            
            if(l1 != NULL){
                l1 = l1 -> next;
            }

            if(l2 != NULL){
                l2 = l2 -> next;
            }
        }
        return ansHead;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        

        ListNode* ans = add(l1, l2);

        return ans;
    }
};