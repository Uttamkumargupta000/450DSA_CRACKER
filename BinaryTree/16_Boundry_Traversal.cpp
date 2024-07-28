// --------------- APPROACH 1 -------------

// TC = O(N)   SC = O(HEIGHT OF TREE)

class Solution {
    private:
    void boundryLeft(Node* root, vector<int> &ans){
        
        //base case
        if(root == NULL){
            return ;
        }
        
        if(root -> left == NULL && root -> right == NULL){
            return;
        }
        
        ans.push_back(root -> data);
        
        if(root -> left){
            boundryLeft(root -> left, ans);
        }
        
        else{
            boundryLeft(root -> right, ans);
        }
    }
    void boundryRight(Node* root, vector<int> &ans){
        
        //base case;
        if(root == NULL){
            return ;
        }
        
        if(root -> left == NULL && root -> right == NULL){
            return;
        }
        
        if(root -> right){
            boundryRight(root -> right, ans);
        }
        
        else{
            boundryRight(root -> left, ans);
        }
        
        ans.push_back(root -> data);
    }
    
    void boundryleaf(Node* root, vector<int> &ans){
        
        //base case
        if(root == NULL){
            return ;
        }
        
        if(root -> left == NULL && root -> right == NULL){
            ans.push_back(root -> data);
            return;
        }
        
        //left leaf me jao
        boundryleaf(root -> left, ans);
        
        //right leaf me jao
        boundryleaf(root -> right, ans);
    }
public:
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        //base case
        if(root == NULL){
            return ans;
        }
        
        ans.push_back(root -> data);
        
        //left traversal
        boundryLeft(root -> left, ans);
        
        //left traversal of leaf;
        boundryleaf(root -> left, ans);
        
        //right traversal of leaf)
        boundryleaf(root -> right, ans);
        
        //right traversal
        boundryRight(root -> right, ans);
        
        return ans;
    }
};