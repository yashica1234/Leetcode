class Solution {
public:
    bool possible(vector<int>&arr,int days,int m,int k){
        int cnt=0;
        int boquets=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if (arr[i]<=days){
                cnt++;
            }
            else{
                boquets+=(cnt/k);
                cnt=0;
            }
        }
        boquets+=(cnt/k);
        return boquets >= m;
    
    };
    int minDays(vector<int>& bloomDay, int m, int k) {
                if (1LL * m * k > bloomDay.size())
            return -1;


        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)){
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