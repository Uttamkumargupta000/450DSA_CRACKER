// ------ APPROACH 1 ------


// TC = O(N^2);

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here    
        vector<int> ans;
        
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                ans.push_back(matrix[i][j]);
            }
        }
        
        sort(ans.begin(), ans.end());
        
        int n = ans.size();
        if(n % 2 == 0){
            return (ans[n/2] + ans[(n-1)/2])/2;
        }
        else{
            return ans[n/2];
        }
    }
};


//-------- APPROACH 2 ----------

// TC = O( R* log(C))