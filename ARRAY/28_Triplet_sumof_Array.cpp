//-------------- APPROACH 1 - TRAVERSAL AS WELL AS TWO POINTER -----------------

// TC = O(N^2)

class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Your Code Here
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i< n; i++){
            int j = i + 1;
            int k = n-1;
            
            while(j < k){
                if(arr[i]+ arr[j] + arr[k] == target){
                    return true;
                    j++;
                    k--;
                }
                else if(arr[i] + arr[j] + arr[k] < target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return false;
    }
};