class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int bal=0;
        for(char ch:s){
            if (ch=='('){
                bal++;
                ans=max(ans,bal);
            }
            else if(ch==')'){
                bal--;
            }
        }
        return ans;
        
    }
};