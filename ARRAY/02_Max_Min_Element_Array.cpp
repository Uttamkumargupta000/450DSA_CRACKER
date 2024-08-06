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