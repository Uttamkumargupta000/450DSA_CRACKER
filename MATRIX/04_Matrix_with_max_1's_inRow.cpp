// ------ Approach 1 using binary search ---------


// TC = O(C* log(N));


class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int rowIndex = -1;
	    int maxi = INT_MIN;
	    
	    for(int i=0; i < n ;i++){
	        
	        int count = 0;
	        int start = 0;
	        int end = m -1;
	        
            //binary search 
	        while(start <= end){
	            int mid = start + (end - start)/2;
	            
	            if(arr[i][mid] == 1){
	                end = mid - 1;
	                count = m - mid;
	                
	                if(count  > maxi){
	                    maxi = count;
	                    rowIndex = i;
	                }
	            }
	            else{
	                start = mid + 1;
	            }
	        }
	    }
	    
	    return rowIndex;
	}

};


// ---------- APPROACH 2 --------

// TC = O(N*C);

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int rowIndex = -1;
	    int maxi = 0;
	    
	    for(int i = 0; i < arr.size() ; i++){
	        int count = 0;
	        for(int j = 0; j < arr[i].size(); j++){
	            if(arr[i][j] == 1){
	                count++;
	            }
	        }
	        if(count > maxi){
	            maxi = max(count, maxi);
	            rowIndex = i;
	        }
	       
	    }
	    return rowIndex;
	}
	   

};