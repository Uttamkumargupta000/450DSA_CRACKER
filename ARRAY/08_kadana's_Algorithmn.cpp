// Kadana's Algorithmn

// tc = O(n^2);


class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        
        int n = arr.size();
        int maxi = INT_MIN;
        
        for(int st = 0; st<n; st++){
            int currSum = 0;
            for(int en = st; en < n; en++){
                currSum += arr[en];
                maxi = max(maxi, currSum);
            }
        }
        return maxi;
    }
};

// optimised Approach with maxi always be positive and make sure if currSum goes to negative it will directly be become zero

// tc = O(n)


class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int n = arr.size();
        int maxi = INT_MIN;
        int currSum = 0;
        for(int i = 0; i<n; i++){
            currSum += arr[i];
            
            maxi = max(maxi, currSum);
            
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxi;
    }
};