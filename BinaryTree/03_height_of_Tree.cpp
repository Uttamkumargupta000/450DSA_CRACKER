//--------------  APPROACH 1 USING RECURSION -------------

// TC = O(N)  SC = O(N)

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        
        //base case 
        if(node == NULL ){
            return NULL;
        }
        
        //left me chale jao
        int left = height(node -> left);
        
        //right me chale jao
        int right = height(node -> right);
        
        int ans = max(left, right) + 1;
        
        return ans;
    }
};