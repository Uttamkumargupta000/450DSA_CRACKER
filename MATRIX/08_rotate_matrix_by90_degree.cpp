//-------------- APPROACH  1 --------------

// ROTATION OF MATRIX BY 90 BY MAIN DIAGONAL THEN ROTATION ABOUT MIDDLE ROW

// TC = O(N^2)

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        //first rotation about diagonal
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < i ; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        //roating about the middle row
        
        for(int i =0 ; i < n/2 ; i++){
            for(int j = 0; j < n ; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[n-1-i][j];
                matrix[n-1-i][j] = temp;
            }
        }
        
    } 
};

// ------------ APPROACH 2 -----------

// ROTATION OF MATRIX BY 90 BY ANTI MAIN DIAGONAL THEN ROTATION ABOUT MIDDLE COLUMN

// TC = O(N^2)

