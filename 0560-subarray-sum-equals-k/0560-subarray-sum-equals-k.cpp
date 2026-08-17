class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>mpp;
       mpp[0]=1;
       int n=nums.size();
       int presum=0;
       int cnt=0;
       for (int i=0;i<n;i++){
        presum+=nums[i];
        int remove=presum-k;
        // If this prefix sum has been seen before,
            // add its count to the result
        if (mpp.find(remove)!=mpp.end()){
            cnt+=mpp[remove];
        }
        mpp[presum]++;

       }
       return cnt;
    }
};