// iterative solution

// tc = O(n)


class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int left = 0;
        int right = n - 1;
        int leftMax =0;
        int rightMax = 0;
        int water = 0;
        
        while(left <= right){
            if(arr[left] <= arr[right]){
                if(arr[left]>= leftMax){
                    leftMax = arr[left];
                }
                else{
                    water += leftMax-arr[left];
                }
                left++;
            }
            else{
                if(arr[right] >= rightMax){
                    rightMax = arr[right];
                }
                else{
                    water+= rightMax-arr[right];
                }
                right--;
            }
        }
        return water;
    }
};