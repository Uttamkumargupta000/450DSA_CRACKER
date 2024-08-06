// ------------ APPROACH 1- SIMPLE UISNG LOOP --------

// TC = O(SQRT(N))

class Solution {
  public:
    int countSquares(int N) {
        int count = 0;
        for(int i = 1 ; i <= sqrt(N); i++){
            int num = i*i;
            if(num < N){
                count++;
            }
        }
        return count;
    }
};