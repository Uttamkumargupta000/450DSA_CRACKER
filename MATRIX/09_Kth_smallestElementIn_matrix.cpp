// ------------ Approach 1 ----------

// TC = 0(N^2)

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    
    vector<int> ans;
    
    //push the element in ans
    for(int i = 0; i < n ;i++){
        for(int j = 0; j < n ; j++){
            ans.push_back(mat[i][j]);
        }
    }
    
    //sort the array
    sort(ans.begin(), ans.end());
    
    return ans[k-1];
      
}


//------------- APPROACH 2 USING HEAP ---------------

// TC = O(K* LOG N)


int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    priority_queue<int> pq;
    for(int i = 0; i < n ;i++){
        for(int j = 0; j < n ; j++){
            pq.push(mat[i][j]);
            
            if(pq.size() > k){
                pq.pop();
            }
        }
    }
    return pq.top();
}