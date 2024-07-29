// --------------- APPROACH 1 USING BINARY SEACRCH -----------

// TC = O(logN)

class Solution {
    private:
    //to search in which part we go 
    int pivotEle(vector<int>& nums){
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e -s)/2;
        while(s < e){
            if(nums[mid] >= nums[0]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
            mid = s + (e - s)/2;
        }
        return s;
    }

    //binary search 
    int binarySearch(vector<int>& nums, int s, int e, int target){

        int mid = s + (e - s)/2;
        while(s <= e){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e - s)/2;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        int pivot = pivotEle(nums);
        
        //condition to get the element
        if(target >= nums[pivot] && target <= nums[n-1] ){
            return binarySearch(nums,pivot,n-1,target);
        }
        else{
            return binarySearch(nums,0,pivot-1,target);
        }
    }
};