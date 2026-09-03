class Solution {
public:

    long long calculateTotalHours(vector<int>piles,int hourly){
        long long totalHours=0;
        for(int i=0;i<piles.size();i++){
            totalHours += (piles[i] + (long long)hourly - 1) / hourly;
        }
        return totalHours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxPiles = *max_element(piles.begin(), piles.end());
        int low=1;
        int high=maxPiles;
        int ans=maxPiles;
        while(low<=high){
            int mid=(low+high)/2;
            long long totalH=calculateTotalHours(piles,mid);
            if(totalH<=h){
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