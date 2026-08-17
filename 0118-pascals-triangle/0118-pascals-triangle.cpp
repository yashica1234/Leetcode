class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            long long val=1;
            vector<int>ansRow;
            ansRow.push_back(1);
            for(int j=1;j<=i;j++){
               val =val*(i-j+1);
                val=val/j;
                ansRow.push_back(val);

            }
            
            ans.push_back(ansRow);



        }
        return ans;
       

        
    }
};