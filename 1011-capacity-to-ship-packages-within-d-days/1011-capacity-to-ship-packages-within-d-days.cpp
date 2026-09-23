class Solution {
public:
    int canShip(vector<int> &arr,int days,int capacity){
        int load=0;
         days=1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(load+arr[i]>capacity){
                days++;
                load=arr[i];
            }
            else{
                load+=arr[i];
            }
        }
        return days;
    };
    int shipWithinDays(vector<int>& weights, int days) {
        
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if (canShip(weights,days,mid)<=days){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};