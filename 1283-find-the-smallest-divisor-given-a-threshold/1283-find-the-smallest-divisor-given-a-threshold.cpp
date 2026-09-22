class Solution {
public: 
    int SumByD(vector<int>&arr,int div){
        int total=0;
        int n=arr.size();
        for (int i=0;i<n;i++){
            total+=ceil((double)(arr[i])/(double)div);
        
        }
        return total;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        if(n>threshold) return -1;
        int low=1;  //smallest possible divisor
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            if (SumByD(nums,mid)<=threshold){
                high=mid-1; //move left
            }
            else{
                low=mid+1;
            }
        }

        return low;
    }
};