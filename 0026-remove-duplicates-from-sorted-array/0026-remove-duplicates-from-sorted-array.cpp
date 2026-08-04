class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0;
        for (int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];

            }
        }
        return i+1; //since j will go till n-2 so the last element woill be unique and has to be printed 
    }
};