class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;
        int n = s.size();
        int m = p.size();
        if(m > n) return ans;
        vector<int> freqP(26,0);
        vector<int> freqW(26,0);
        for(int i=0;i<m;i++)
        {
            freqP[p[i]-'a']++;
            freqW[s[i]-'a']++;
        }
        if(freqP == freqW)
            ans.push_back(0);
        for(int i=m;i<n;i++)
        {
            freqW[s[i]-'a']++;     
            freqW[s[i-m]-'a']--;    

            if(freqP == freqW)
            ans.push_back(i-m+1);
        }
        return ans;
    }
};
