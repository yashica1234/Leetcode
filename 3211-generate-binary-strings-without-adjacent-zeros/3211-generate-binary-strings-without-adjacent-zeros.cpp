class Solution {
public:
    void solve(int n, string &s, vector<string> &ans) {
        
        if (s.size() == n) {
            ans.push_back(s);
            return;
        }

        // Choice 1: 1 hamesha add kar sakte hain
        s.push_back('1');
        solve(n, s, ans);
        s.pop_back();

        // Choice 2: 0 tabhi add karo jab previous char 0 na ho
        if (s.empty() || s.back() != '0') {
            s.push_back('0');
            solve(n, s, ans);
            s.pop_back();
        }
    }

    vector<string> validStrings(int n) {
        vector<string> ans;
        string s = "";
        solve(n, s, ans);
        return ans;
    }
};