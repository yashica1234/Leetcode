class Solution {
public:
    int CountPartitions(vector<int> &arr,int k){
        int partition=1;
        int currentSum=0;
        for(int i=0;i<arr.size();i++){
            if (currentSum+arr[i]<=k){
                currentSum+=arr[i];
            }
            else{
                currentSum=arr[i];
                partition++;
            }
        }
        return partition;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high= accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int partition=CountPartitions(nums,mid);
            if(partition<=k){
                high=mid-1; //move left
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};