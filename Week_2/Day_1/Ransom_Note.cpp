class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>ans1(26,0);
        vector<int>ans2(26,0);
        for(char t : ransomNote)
            {
                ans1[t-'a']++;
            }
        for(char i : magazine)
            {
                ans2[i-'a']++;
            }
        for(int i=0;i<26;i++)
            {
                if(ans1[i]>ans2[i])
                    return false;
            }
        return true;
    }
};
