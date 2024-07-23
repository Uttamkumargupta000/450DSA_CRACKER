//----------- APPROACH 1 ----------


class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        
        vector<int> ans;
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == i+1){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};