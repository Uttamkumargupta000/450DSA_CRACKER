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