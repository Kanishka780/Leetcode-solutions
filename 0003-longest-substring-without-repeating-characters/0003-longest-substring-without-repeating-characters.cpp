class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>freq;
        int left=0,m=0;
        for(int i=0 ;i< s.length(); i++){
            if( freq.count(s[i]) ==0){
                freq.insert(s[i]);
                m=max(m,i-left+1);
            }
            else{
                while(freq.count(s[i])){
                    freq.erase(s[left]);
                    left++;
                }
                freq.insert(s[i]);
            }
        }
        return m;
    }
};