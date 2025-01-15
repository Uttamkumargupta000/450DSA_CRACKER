// iterative solution

// TC = O(n+m)  space complexity = O(n+m)


class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int> combine;
        
        for(int i: a){
            combine[i]++;
        }
        
        for(int i: b){
            combine[i]++;
        }
        
        return combine.size();
    }
};