// iterative solution 

// TC = O(n);


class Solution {
    public:
    void sort012(int arr[], int n)
    {
        int zero = 0;
        int one = 0;
        int two = 0;
        
        for(int i=0;i<n;i++){
            //count 0
            if(arr[i] == 0){
                zero++;
            }
            
            //count 1
            else if(arr[i] == 1){
                one++;
            }
            
            //count 2
            else{
                two++;
            }
        }
        
        // storing the value in the original array
        for(int i=0;i<n;i++){
            
            if(i < zero){
                arr[i] = 0;
            }
            
            else if(i < (one+zero)){
                arr[i] = 1;
            }
            
            else{
                arr[i] = 2;
            }
            
        }
    }
    
};