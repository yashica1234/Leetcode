class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
    
        int sum2=0;
        for(int i=0;i<n;i++)
        {
          sum2= sum2 + nums[i];
        }
        int sum1=(n*(n+1))/2;
        return sum1-sum2;
        
    
    }
};