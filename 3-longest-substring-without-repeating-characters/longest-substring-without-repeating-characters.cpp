class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int left=0,maxLen=0;

        for (int r=0;r<s.size();r++){
            while(st.count(s[r])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[r]);
            maxLen=max(maxLen,r-left+1);
        }return maxLen;
    }
};