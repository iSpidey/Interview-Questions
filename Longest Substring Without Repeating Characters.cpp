class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        map<char, int> m;
        int len = 0, st = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(m.find(s[i]) != m.end())
                st = max(st, m[s[i]] + 1);
            
            m[s[i]] = i;
            len = max(len, i-st+1);
        }
        
        return len;
    }
};
