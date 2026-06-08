class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>ans(26,0);
        vector<int>result(26,0);
        for(int i=0;i<s.size();i++)
        {
            ans[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            result[t[i]-'a']++;
        } 
        if(ans==result)return true;
        return false;
    }
};
