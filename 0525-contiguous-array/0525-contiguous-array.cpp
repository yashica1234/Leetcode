class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(auto &it : nums) {
            if(it == 1)
                it = 1;
            else
                it = -1;
}
        map<int,int>mpp;
        mpp[0]=-1;

        int maxi=0;
        int sum=0;
        for( int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mpp.find(sum)!=mpp.end())
                maxi=max(maxi,i-mpp[sum]);
            else 
                mpp[sum]=i;
            }
            return maxi;
        }
    
};