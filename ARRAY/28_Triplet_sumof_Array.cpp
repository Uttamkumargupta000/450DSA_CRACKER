//-------------- APPROACH 1 - TRAVERSAL AS WELL AS TWO POINTER -----------------

// TC = O(N^2)

class Solution {
  public:

    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool find3Numbers(int arr[], int n, int x) {
        
        //sorting the array
        sort(arr,arr+n);
        
        for(int i = 0 ; i < n ; i++){
            //two pointer 
            int s = i+1;
            int e = n-1;
            
            while( s < e){
                //condition check 
                if(arr[i] + arr[s] + arr[e] == x){
                    return true;
                    s++;
                    e--;
                }
                
                else if(arr[i] + arr[s] +arr[e] < x){
                    s++;
                }
                
                else{
                    e--;
                }
            }
        }
        return false;
    }
};