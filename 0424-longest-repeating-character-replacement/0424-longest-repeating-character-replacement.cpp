class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0; int m=0;
        int ans=0;
        vector<int>freq(26,0);
        for(int i=0 ;i< s.length(); i++){
            freq[s[i]-'A']++;
            m=max(m,freq[s[i]-'A']);
            while((i-left+1)-m >k){
                freq[s[left]-'A']--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};