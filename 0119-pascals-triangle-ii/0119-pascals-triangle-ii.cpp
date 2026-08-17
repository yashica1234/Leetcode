class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ansrow;
        long long val=1;
        ansrow.push_back(1);
        for(int i=1;i<=rowIndex;i++){
            val=val*(rowIndex-i+1);
            val=val/i;
            ansrow.push_back(val);

        }
        return ansrow;
    }
};