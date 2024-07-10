// TC = O(r*c)

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        
        int startRow = 0;
        int endRow = r-1;
        
        int startCol = 0;
        int endCol = c-1;
        
        while(startRow <= endRow && startCol <= endCol ){
        
            for(int i = startCol; i <= endCol ; i++ ){
                ans.push_back(matrix[startRow][i]);
            }
            startRow++;
            
            for(int i = startRow; i <= endRow; i++){
                ans.push_back(matrix[i][endCol]);
            }
            endCol--;
            
            if(startRow <= endRow){
                for(int i = endCol; i >= startCol ; i--){
                    ans.push_back(matrix[endRow][i]);
                }
                endRow--;
            }
            
            if(startCol <= endCol){
                for(int i = endRow; i >= startRow; i--){
                    ans.push_back(matrix[i][startCol]);
                }
                startCol++;
            }
            
        }
        
        return ans;
    }
};