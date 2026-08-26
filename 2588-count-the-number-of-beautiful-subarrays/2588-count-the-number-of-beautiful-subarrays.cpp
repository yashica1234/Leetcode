class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        int xr=0;
        long long cnt=0;
        map<int,int>mpp;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            xr^=nums[i];
            if(mpp.find(xr) != mpp.end()){
            cnt+=mpp[xr];
            }
            mpp[xr]++;
        }
        return cnt;
        
    }
};