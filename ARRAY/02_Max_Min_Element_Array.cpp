//    https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1


// TC = O(n);

class Solution {
    private:
    long long int maxValue(vector<long long int> arr){
        
        long long int ans = INT_MIN;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>ans){
                ans = arr[i];
            }
        }
        return ans;
    }
    long long int minValue(vector<long long int> arr){
        
        long long int ans = INT_MAX;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<ans){
                ans = arr[i];
            }
        }
        return ans;
    }
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        pair<long long, long long> p;
        p.first = minValue(arr);
        p.second = maxValue(arr);
        
        return p;
    }
};


// #### APPROACH 2 ####


class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        long long max = arr[0];
        long long min = arr[0];
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] > max){
                max = arr[i];
            }
            
            if(arr[i] < min){
                min = arr[i];
            }
        }
        return {min, max};
    }
};

// ------------ Approach 3 -----------

class Solution {
  public:
  long long int getMax(vector<long long int> arr){
      int ans = INT_MIN;
      for(int i =0 ;i < arr.size(); i++){
          if(arr[i] > ans){
              ans = arr[i];
          }
      }
      return ans;
  }
  
  long long int getMin(vector<long long int> arr){
      int ans = INT_MAX;
      for(int i =0 ;i < arr.size(); i++){
          if(arr[i] < ans){
              ans = arr[i];
          }
      }
      return ans;
  }
  
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        int len1 = getMax(arr);
        int len2 = getMin(arr);
        
        return {len2, len1};
    }
};


// ----------python code -------------

class Solution:
    def get_min_max(self, arr):
        
        # handle empty case
        if not arr:
            return None
        
        min_val = max_val = arr[0];
        
        for num in arr[1:]:
            if num < min_val:
                min_val = num;
                
            if num > max_val:
                max_val = num;
            
        return min_val, max_val;