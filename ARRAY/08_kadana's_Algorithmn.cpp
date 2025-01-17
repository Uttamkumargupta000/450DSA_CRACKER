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

//