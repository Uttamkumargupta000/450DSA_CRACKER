//----------- APPRAOCH 1 - USING VECTOR AND QUEUE

//   TC = O(N)  SC = O(N)

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
        vector<int> ans;
        
        //base case
        if(root == NULL){
            return ans;
        }
        
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            ans.push_back(temp -> data);
            
            if(temp -> left != NULL){
                q.push(temp -> left);
            }
            
            if(temp -> right != NULL){
                q.push(temp -> right);
            }
        }
        return ans;
    }
};