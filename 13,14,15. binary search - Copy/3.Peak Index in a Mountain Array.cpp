//852. Peak Index in a Mountain Array leetcode
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
    int n=arr.size();
    int low=0,high=n-1;
    
    while(low<high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]<arr[mid+1])
            low=mid+1;
        
        else 
            high=mid;
        
        
        mid=low+(high-low)/2;
    }
    return high;
    }
};