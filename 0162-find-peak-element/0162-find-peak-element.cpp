class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid+1]){
                high=mid; //peak can be in left half+mid itself
            }
            else{
                low=mid+1; //peak will be in the right half
            }
        }
        return low;
        
    }
};