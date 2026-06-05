class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string st="";
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            st+=s[i];
            if(s[i]>='A'&&s[i]<='Z')
            st+=s[i]-'A'+'a';
            if(s[i]>='0'&&s[i]<='9')
            st+=s[i];
        }
        int n1=st.size();
        if(n1==0 || n1==1)
        return true;
        else
        {
            int i=0,j=n1-1;
            while(i<j)
            {
                if(st[i]==st[j])
                {
                    i++;
                    j--;
                }
                else
                return 0;
            }

        }
        return 1;

    }
};
