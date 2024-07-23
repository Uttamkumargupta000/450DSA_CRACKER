// ------- APPROACH 1 ---------

// TC = O(LOGN)


class Solution
{
    public:
    int firstocc(int arr[], int n, int x){
        int s=0;
        int e=n-1;
        int ans=-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(arr[mid]==x){
                ans=mid;
                e=mid-1;
            }
            else if(arr[mid]>x){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
    int lastocc(int arr[], int n, int x){
        int s=0;
        int e=n-1;
        int ans=-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(arr[mid]==x){
                ans=mid;
                s=mid+1;
            }
            else if(arr[mid]>x){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> v;
        int a=firstocc(arr,n,x);
        int b=lastocc(arr,n,x);
        v.push_back(a);
        v.push_back(b);
        return v;
        
    }
};