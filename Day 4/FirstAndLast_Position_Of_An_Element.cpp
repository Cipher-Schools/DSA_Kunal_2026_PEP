//First and Last Position of an element in a Sorted array
class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int first=-1;
        int last=-1;
        int low=0;
        int high=arr.size()-1;
        int ans=-1;
        while(low<=high){
        
            int mid=low+(high-low)/2;
            if(arr[mid]>target){
                high=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else {
                first=mid;
                high=mid-1;
            }
        }
        low=0;
        high=arr.size()-1;
        while(low<=high){
        
            int mid=low+(high-low)/2;
            if(arr[mid]>target){
                high=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else {
                last=mid;
                low=mid+1;
            }
        }
        return {first,last};
    }
};
