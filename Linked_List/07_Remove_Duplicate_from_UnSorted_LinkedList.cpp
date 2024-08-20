// -------------- APproach 1 Geeks for Geeks 

//  Map solution 

// TC = O(N)      Sc = O(N)

class Solution {
public:
    Node* removeDuplicates(Node* head) {
        if (head == NULL) {
            return NULL;
        }

        unordered_map<int, bool> visited;
        Node* curr = head;
        Node* prev = NULL;

        while (curr != NULL) {
            if (visited[curr->data]) {
                // Duplicate found, remove the current node
                prev->next = curr->next;
                delete curr;
            } 
            else {
                
                visited[curr->data] = true;
                prev = curr;
                
            }
            
            curr = curr->next;
        }

        return head;
    }
};