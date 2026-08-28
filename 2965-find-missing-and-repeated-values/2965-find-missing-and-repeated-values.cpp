class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int N=n*n;
       
        long long sum1 = 1LL * N * (N+ 1) / 2;
        long long sum2 = 1LL * N * (N+ 1) * (2 * N + 1) / 6;
        int s1=0;
        int s2=0;
       for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            s1 += grid[i][j];
            s2 += 1LL * grid[i][j] * grid[i][j];
    }
}
        int val1=s1-sum1;
        int val2=s2-sum2;
        val2=val2/val1;
        int x=(val1+val2)/2;
        int y=x-val1;
        return {(int)x,(int)y};        
    }
};