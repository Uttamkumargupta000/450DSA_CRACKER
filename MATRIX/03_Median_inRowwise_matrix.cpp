//--------- APPROACH 1 - SIMPLE ONE --------

// TC = O(N^2)

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


// ------------ APPROACH 2 OPTIMISED ONE -------------

// TC = O(32 * R * LOG (C))

// USING BINARY SEARCH AND UPPER BOUND STL FUNCTION


class Solution{
    //count function less or equal to middle element
    private:
    int countLessEqual(vector<int> &row, int mid){
        return upper_bound(row.begin(), row.end(), mid) - row.begin();
    }
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        R = matrix.size();
        C = matrix[0].size();
        
        //finging the min and max element in row wise sorted 
        int minEle = matrix[0][0];
        int maxEle = matrix[0][C-1];
        
        //taking the min and max from the matrix; 
        for(int i = 0 ; i < R; i++){
            minEle = min(minEle, matrix[i][0]);
            maxEle = max(maxEle, matrix[i][C-1]);
        }
        
        //using the binary search for the remaining element 
        int desired = (R*C + 1)/2;
        
        while(minEle < maxEle){
            
            int mid = minEle + (maxEle - minEle)/2;
            
            int count = 0;
            
            for(int i = 0; i < R ; i++){
                //count function for less or equal middle element 
                count += countLessEqual(matrix[i], mid);
            }
            
            // adjusting the search the range
            if(count < desired){
                minEle = mid + 1;
            }
            else{
                maxEle = mid;
            }
        }
        return minEle;
    }
};