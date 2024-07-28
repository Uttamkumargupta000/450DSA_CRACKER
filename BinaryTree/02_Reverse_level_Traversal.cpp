//--------------- APPROACH 1 USING VECTOR AND QUEUE ------------

//  TC = O(N)  SC =O(N)

vector<int> reverseLevelOrder(Node *root)
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
        
        //First Right part me jao then left part 
        if(temp -> right){
            q.push(temp -> right);
        }
        
        if(temp -> left){
            q.push(temp -> left);
        }
    }
    // reverse the array
    reverse(ans.begin(), ans.end());
    
    return ans;
}