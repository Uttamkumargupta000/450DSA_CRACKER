// ---------APPROACH SIMPLE TRAVERSAL OF MATRIX -------------------


// TC = O(N^2 )   SC = O(2N)
class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        
        vector<int> ans;
        
        for(int i=0; i < N; i++){
            for(int j = 0; j < N; j++){
                ans.push_back(Mat[i][j]);
            }
        }
        
        sort(ans.begin(), ans.end());
        
        int index = 0;
        
        for(int i = 0 ; i < N ; i++){
            for(int j = 0; j < N; j++){
                Mat[i][j] = ans[index];
                index++;
            }
        }
        
        return Mat;
        
    }
};