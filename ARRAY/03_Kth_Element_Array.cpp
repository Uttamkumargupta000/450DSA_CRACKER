// ##### Approach 1 #####

//     TC = O(n*log(n));


// Using STL 
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //sort the array 
        sort(arr, arr+r+1);
        return arr[k-1];
    }
};

// ########## Approach 2 ###########

//     TC = O(k)

//using Heap or Priority Queue 

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //sort the array 
        priority_queue<int> pq;
        
        for(int i=0; i<k; i++){
            pq.push(arr[i]);
        }
        
        for(int i=k; i<=r; i++){
            if(arr[i] < pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        return pq.top();
    }
};



