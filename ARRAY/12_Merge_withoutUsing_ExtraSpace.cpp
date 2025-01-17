// ----------- APPROACH 1-----------

// TC = O(N+M LOG(N+M))


class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int i = n - 1;
            int j = 0;
            
            while(arr1[i] > arr2[j] && i >= 0 && j<m){
                swap(arr1[i], arr2[j]);
                i--;
                j++;
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+n);
        } 
};


// apparoach 2 

// same time complexity and release the memory at run time

class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
    
        vector<int> res(n + m); // Use a vector for dynamic memory management
        int i = 0, j = 0, k = 0;
    
        while (i < n && j < m) {
            if (a[i] <= b[j]) {
                res[k++] = a[i++];
            } else {
                res[k++] = b[j++];
            }
        }
        
        while (i < n) {
            res[k++] = a[i++];
        }
    
        while (j < m) {
            res[k++] = b[j++];
        }
        // a.clear(); 
        // b.clear(); 
    
        int i1 = 0;
        int j1 = 0;
        int k1 = 0;
        
        while(i1 < n){
            a[i1++] = res[k1++];
        }
        
        while(j1 < m){
            b[j1++] = res[k1++];
        }
        
        // deleting the memory at run time to avoid extra space 
        res.clear();
        res.shrink_to_fit();
    }

};