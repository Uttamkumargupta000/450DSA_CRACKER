// -------- APPROACH 1 USING TWO POINTER ------------

// TC = (O(N/2))


class Solution{
public:	
	
	int isPalindrome(string S)
	{
	    //initlise the staring and last index of string 
	    int s = 0;
	    int e = S.length() - 1;
	    
	    while(s < e){
            //check for the first and last element
	        if(S[s] == S[e]){
	            s++;
	            e--;
	        }
	        else{
	            return 0;
	        }
	    }
	    return 1;
	}
};