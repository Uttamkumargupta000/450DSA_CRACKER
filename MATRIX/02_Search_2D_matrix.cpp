// ----------APPROACH 1 USING BINARY SEACRCH -----------

// TC=O(LOG (R*C))


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int s = 0;
        int e = row*col - 1;
        int mid = s + (e-s)/2;

        while(s <= e){
            //row = mid/col or col = mid%col
            int element = matrix[mid/col][mid%col];

            if(element == target){
                return true;
            }
            else if(element < target){
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return false;
    }
};

// ------------- APPROACH 2 ------------

// TC = O(N^2)

class Solution{

    public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = 0 ; i < row; i++){
            for(int j =0 ; j < col ; j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
};