class Solution {
public:
     int value(char ch) {
        if(ch == 'I') return 1;
        if(ch == 'V') return 5;
        if(ch == 'X') return 10;
        if(ch == 'L') return 50;
        if(ch == 'C') return 100;
        if(ch == 'D') return 500;
        if(ch == 'M') return 1000;

        return 0;
    }
   
    int romanToInt(string s) {
        
        int ans=0;
        for( int i=0;i<s.length();i++){
            int curr=value(s[i]);
            if(i+1<s.length() && curr<value((s[i+1]))){
                ans-=curr;
            }
            else{
                ans+=curr;
            }       
        }
        return ans;
    }
};
        