// -------  iterative solution

// time complexity = O(n) and space complexity = O(n)


class Solution {
    public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
        
        vector<int> positive_element;
        vector<int> negative_element;
        
        for(int i = 0; i< n;i++){
            if(arr[i] >= 0){
                positive_element.push_back(arr[i]);
            }
            else{
                negative_element.push_back(arr[i]);
            }
        }
        
        for(int i= 0; i< negative_element.size(); i++){
            positive_element.push_back(negative_element[i]);
        }
        
        for(int i = 0; i< n; i++){
            arr[i] = positive_element[i];
        }
    }
};